<template>
  <div class="slidev-layout center h-full grid place-content-center" :style="style">
    <div class="my-auto text-center">
      <span id="center-text" class="text-4xl font-serif font-semibold">
        {{ headTitle }}
      </span>
      <br />
      
      <p id="description" v-if="!!description" class="text-xl font-sans font-normal mt-4">
        {{ description }}
      </p>
    </div>
  </div>
</template>

<script setup lang="ts">
import { handleBackground } from './layoutHelper';

const props = defineProps({
  headTitle: {
    type: String,
    default: "My Title 主标题",
  },
  description: {
    type: String,
    default: "",
  },
  background: {
    type: String,
    // random image from a curated Unsplash collection by Anthony
    default: "https://source.unsplash.com/collection/94734566/1920x1080",
  },
  backgroundFilter: {
    type: String,
    // default: "linear-gradient(90deg, rgba(38,9,26,0.95) 0%, rgba(38,25,51,0.90) 60%, rgba(18,52,75,0.85) 100%)",
    default: "linear-gradient(90deg, rgba(3,10,22,1) 0%, rgba(33,72,136,0.7) 100%)",
  },
});

const style = handleBackground(props.background, true, props.backgroundFilter);
</script>

<!-- <style scoped>
h1 {
  @apply text-4xl font-serif font-semibold
}
</style> -->