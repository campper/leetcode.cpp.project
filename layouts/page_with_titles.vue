<template>
  <div class="slidev-layout">
    <div>
      <h2 class="font-semibold font-serif">{{ headTitle }}</h2>
      <p class="font-light tracking-wide text-gray-400 mt-14">{{ subtitle }}</p>
    </div>
    <div>
      <slot />
    </div>
  </div>
</template>

<script setup lang="ts">
const props = defineProps({
  headTitle: {
    type: String,
    default: "My Title 主标题",
  },
  subtitle: {
    type: String,
    default: "My Subtitle 副标题",
  }
});
</script>
