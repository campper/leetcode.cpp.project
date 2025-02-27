<!-- TODO: background hero -->
<template>
  <div class="w-full rounded border-1 border-green-100 shadow-lg min-h-20">
    <div v-if="!!title" class="font-semibold font-serif text-lg -mx-1 border-l-7 border-green-600 pl-3 mt-2"> {{ title }} </div>
    <div class="mx-5 pb-4 text-sm text-gray-700">
      <slot />
    </div>
  </div>
</template>

<script setup lang="ts">

const props = defineProps({
  title: {
    type: String,
    default: '',
  },
})
</script>