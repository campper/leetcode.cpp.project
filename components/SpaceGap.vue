<script setup lang="ts">
import { ref } from 'vue'

const props = defineProps({
  size: {
    type: Number,
    default: 4,
  },
})
</script>

<template>
  <div v-bind:class="'p-' + props.size"></div>
</template>