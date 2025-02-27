<template>
  <div class="slidev-layout">
    <div>
      <h1>{{ headTitle }}</h1>
    </div>
    <div :class="['mt-12', 'ml-4', 'h-full', useTwoColumns ? 'two-columns' : '']">
      <div :class="['mb-4', 'ml-4', 'break-inside-avoid', item.avoidBreakBefore ? 'break-before-avoid' : '']" v-for="item of toc" :key="item.title">
        <!-- 一级标题 -->
        <div class="text-xl font-serif font-semibold border-l-5 -ml-3 pl-3 py-1 border-blue-600 bg-gradient-to-r from-blue-200 to-white">
          {{ item.title }}
        </div>
        <!-- 二级标题 -->
        <ul class="mt-3 ml-6">
          <li v-for="subTitle of item.children" :key="subTitle" class=" font-sans font-normal my-1 ml-4">
            {{ subTitle }}
          </li>
        </ul>
      </div>
    </div>
  </div>
</template>

<script lang="ts">
export default {
  name: 'Toc',
  inheritAttrs: false
}
</script>

<script setup lang="ts">

import { computed, type PropType } from 'vue'

// 仅支持二级目录
interface TableOfContents {
  title: string;
  children: Array<string>;
  avoidBreakBefore?: boolean;
};

const props = defineProps({
  headTitle: {
    type: String,
    default: "My Title 主标题",
  },
  toc: {
    type: Object as PropType<Array<TableOfContents>>,
    default: () => [{ title: "无标题内容", children: [], avoidBreakBefore: false }],
  },
  useTwoColumns: {
    type: Boolean,
    default: true,
  },
});
</script>

<style scoped>
.two-columns {
  @apply columns-2 gap-5;
  /* column-rule: 4px solid rgba(148,163,184,.25); */
}
</style>