<template>
  <div class="relative inline-block">
    <a
      class="cursor-pointer text-blue-600 hover:text-blue-800"
      :href="url"
      target="_blank"
      @mouseover="showTooltip = true"
      @mouseleave="showTooltip = false"
    >
      [{{ formattedCitations }}]
    </a>
    <div
      v-if="showTooltip"
      class="absolute bottom-full left-1/2 transform -translate-x-1/2 w-[30em] p-2 bg-white border border-gray-300 rounded shadow-lg z-10"
    >
      <div
        v-for="(citation, index) in citationDetails"
        :key="citation.id"
        class="mb-2 last:mb-0 text-[0.8rem]"
      >
        <p class="font-bold mb-1">{{ citation.title }}</p>
        <p class="">{{ formatAuthorsAndDate(citation) }}</p>
        <!-- <a
          :href="citation.URL"
          target="_blank"
          rel="noopener noreferrer"
          class="text-blue-600 hover:text-blue-800"
        >
          DOI: {{ citation.DOI }}
        </a> -->
        <!-- <p class="text-[0.6rem] leading-[0.3rem]">
          {{ citation.abstract.slice(0, 500) }}...
        </p> -->
      </div>
    </div>
  </div>
</template>
<script setup lang="ts">
import { ref, computed, onMounted, useSlots } from "vue";
import { citeMap, CiteEntry, addCitation, getCitationIndex } from "./citations";

const props = defineProps<{
  short?: string;
}>();

const slots = useSlots();
const idSlot = slots.default ? (slots.default()[0].children as string) : "";
const entryIds = idSlot.split(",").map((id) => id.trim());
const entries = entryIds.map((id) => citeMap[id]).filter(Boolean);

const showTooltip = ref(false);

const getCitationDetails = (id: string): CiteEntry | undefined => {
  return citeMap[id];
};

const url = entries.length > 0 ? entries[0].URL : "";

onMounted(() => {
  // Add current references
  entries.forEach((entry) => {
    if (entry) {
      addCitation(entry.id);
    }
  });
});

const getShortName = (entry: CiteEntry) => {
  const title = entry.title;
  if (props.short) {
    return props.short;
  } else if (title.includes(":")) {
    return title.split(":")[0].replace(/[ ,]+/, "");
  } else {
    const words = title.split(" ");
    return words.slice(0, 3).join("").replace(/[ ,]+/, "");
  }
};

const formattedCitations = computed(() => {
  const citationIndices = entries.map((entry) => getShortName(entry));
  console.log(citationIndices);
  return citationIndices.join(", ");
});

const citationDetails = computed(
  () =>
    entryIds.map((id) => getCitationDetails(id)).filter(Boolean) as CiteEntry[]
);

const formatAuthorsAndDate = (citation: CiteEntry) => {
  const authors = citation.author.map((author) => `${author.family}`);
  let authorString = authors[0];
  if (authors.length > 1) {
    authorString += " et al.";
  }
  const date = citation.issued["date-parts"][0];
  const formattedDate = date.slice(0, 3).join("/");
  return `${authorString}, ${formattedDate}`;
};
</script>
