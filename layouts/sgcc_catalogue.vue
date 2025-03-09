<script setup lang="ts">
// import { useSlideContext } from 'slidev'
import { computed } from 'vue';
import UnoCSS from 'unocss/vite'
import { defineProps } from 'vue';

// 获取当前幻灯片的 Frontmatter 数据
const props = defineProps({
  title: {
    type: String,
    default: '默认目录',
  },
  englishTitle: {
    type: String,
    default: 'Default Content',
  },
  themeColor: {
    type: String,
    default: '#FFF',
  },
  fontColor: {
    type: String,
    default: '#007470',
  },
  fontSize: {
    type: String,
    default: '1.5rem',
  },
});

// 获取目录索引形状大小和颜色
const height = 50;
const width = 50;
const color = '#008380';
const times = 5;

// 提取参数
</script>

<style scoped>
h1 {
  @apply text-4xl font-serif font-semibold
}

</style>

<template>
  <div class="slidev-layout cover">
    <div style="position:absolute;top:330px;left:100px;width: 37px; height: 133px; background-color: #008380;z-index: 2;"></div>
    <div style="position:absolute;top:133px;left:120px;width:120px; height:270px; background-color: #D9D9D9;z-index: 1;"></div>
      <div>
        <h1 :style="{color:fontColor}"> {{ props.title }} </h1>
        <h1 :style="{color:fontColor}"> {{ props.englishTitle }} </h1>
      </div>
      </div>
    <div class="">
      <div class="term" style="position: absolute;">
        <div class="flex ml-100" :style="{height: height + 'px', width: width + 'px', backgroundColor: color}">
          1
        </div>
        <div :style="{height: height + 'px', width: times * width + 'px', backgroundColor: color}">
          研发情况
        </div>
      </div>
      <div class="term" style="position: absolute;top: 100px;">
        <div class="flex ml-100" :style="{height: height + 'px', width: width + 'px', backgroundColor: color}">
          2
        </div>
        <div :style="{height: height + 'px', width:times * width + 'px', backgroundColor: color}">
          项目情况
        </div> 
        </div>  
  </div>
</template>