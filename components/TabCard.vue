<!-- TODO: background hero -->
<template>
  <div class="w-full rounded border-1 border-green-100 shadow-md min-h-20">
    <div class="text-sm font-medium text-center text-gray-500 border-b border-gray-200 dark:text-gray-400 dark:border-gray-700">
      <div class="flex flex-wrap my-0 -mb-px justify-center">
        <div class="mx-1" v-for="(tab, index) of tabs" :key="index" @click="changeTab(index)">
          <div :class="['inline-block px-2 py-1 border-b-2',
        activeTabIndex != index
          ? 'border-transparent hover:text-gray-600 hover:bg-gray-50 hover:border-gray-300 dark:hover:text-gray-300'
          : 'text-blue-700 border-blue-600 active bg-blue-50']">
            {{ tab }}
          </div>
        </div>
      </div>
    </div>
    <div :class="(useMargin ? 'my-4 mx-6' : '') + ' ' + 'h-full'">
      <slot :name="activeTabIndex" />
    </div>
  </div>
</template>

<script setup lang="ts">
import { ref } from 'vue';

const props = defineProps({
  tabs: {
    type: Array<String>,
    default: ['tab1', 'tab2', 'tab3'],
  },
  initTab: {
    type: Number,
    default: 0,
  },
  useMargin: {
    type: Boolean,
    default: true,
  },
})

let activeTabIndex = ref(props.initTab);

const changeTab = (index: number) => {
  activeTabIndex.value = index;
}
</script>

<style scoped>
li {
  list-style: none;
}
</style>