<template>
  <div class="flex flex-row align-top -ml-2">
    <div class="mr-2 mt-[0.7rem]">
      <span
        class="flex items-center justify-center rounded-full text-white font-bold bg-blue-600 h-full"
        :style="circleStyle"
      >
        {{ props.index }}
      </span>
    </div>
    <div class="-my-2">
      <slot></slot>
    </div>
  </div>
</template>

<script setup lang="ts">
import { computed } from "vue";

interface Props {
  index: number;
  size?: string;
}

const props = withDefaults(defineProps<Props>(), {
  size: "1.2rem",
});

const circleStyle = computed(() => ({
  width: props.size,
  height: props.size,
  fontSize: `calc(${props.size} * 0.6)`,
}));
</script>
