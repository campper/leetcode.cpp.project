<script setup lang="ts">
import { ref } from 'vue'

const props = defineProps({
  author: {
    type: String,
    default: "",
  },
  boxStyles: {
    type: Array<String>,
    default: ['border-l-7', "bg-green-100", "border-green-500"],
  },
  textStyles: {
    type: Array<String>,
    default: ["text-green-500"],
  },
})
</script>

<template>
  <div :class="['my-2', 'min-h-6', 'shadow-md', 'shadow-green-50', 'px-2', ...boxStyles]">
    <div class="p-2">
      <p :class="['text-lg', 'font-serif', 'indent-sm', 'leading-6', ...textStyles]">
        <slot />
      </p>
      <p v-if="!!author" :class="['text-md', 'font-sans', 'text-right', ...textStyles]">
        {{ "——" + author }}
      </p>
    </div>
  </div>
</template>