<template>
  <div :class="`grid grid-cols-2 gap-4`">
    <div>
      <slot name="left" />
    </div>
    <div>
      <slot name="right" />
    </div>
  </div>
</template>

<script setup lang="ts">
const props = defineProps({
  cols: {
    type: String,
    default: "2",
  },
  gap: {
    type: Number,
    default: 4,
  },
});
</script>