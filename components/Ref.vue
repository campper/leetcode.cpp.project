<template>
  <span class="relative inline-block">
    <em>({{ formattedAuthorsAndDate }})</em>
  </span>
</template>

<script setup lang="ts">
import { useSlots } from "vue";
import { citeMap, CiteEntry } from "./citations";

const slots = useSlots();
const idSlot = slots.default ? (slots.default()[0].children as string) : "";
const entry = citeMap[idSlot];

const formatAuthorsAndDate = (citation: CiteEntry) => {
  const authors = citation.author.map((author) => `${author.family}`);
  let authorString = authors[0];
  if (authors.length > 1) {
    authorString += " et al.";
  }
  const year = citation.issued["date-parts"][0][0];
  return `${authorString}, ${year}`;
};

const formattedAuthorsAndDate = formatAuthorsAndDate(entry);
</script>
