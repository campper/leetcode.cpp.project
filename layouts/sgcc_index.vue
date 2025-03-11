<script setup lang="ts">
import { computed } from 'vue';
import { handleBackground, resolveAssetUrl } from "./sgcc_index_layout";

const getCurrentDate = (): String => {
  const now = new Date();
  return now.getFullYear() + "年" + (now.getMonth() + 1) + "月";
};

const props = defineProps({
  background: {
    type: String,
    default: "/assets/sgcc_title_bg.png"
  },
  headtitle: {
    type: String,
    default: "光明电力大模型2",
  },
  subtitle: {
    type: String,
    default: "中国电力科学研究院有限公司2",
  },
  publishTime: {
    type: String,
    default: Date().toString(),
  },
  author: {
    type: String,
    default: "张强",
  },

});

console.log(props.headtitle);

const imageSrc = "/assets/SGGM-logo.png";
const imgWidth = 66;
const imgHeight = 66;

const style = handleBackground(
    props.background,
    true,
    // "linear-gradient(90deg,rgba(3,10,22,1) 0%, rgba(59,130,246,0.5) 100%)"
);

</script>

<template>
    <div class="slidev-layout cover" :style="style">
        <div class="-ml-7 flex flex-row items-center space-x-3 h-[2.8em]">
            <div><img src="/assets/sgcc_logo.png" class="h-[5em]" /></div>
        </div>
      
        <div class="ml-30 my-auto w-full pl-0" >
          <div class="flex items-left space-x-5 h-[5em] ml-85">
            <img :src="imageSrc" :style="{ width: imgWidth + 'px', height: imgHeight + 'px' }" alt="光明大模型" />
          </div>
          <h1 class="tracking-wide" style="font-size: 3rem;   justify-content: center;">{{ props.headtitle }}</h1>
        </div>

        <div class="ml-70 my-auto mb-1.5">
          <p class="text-1xl font-normal font-semibold" style="color:#007470; font-size: 1.7rem;">{{ props.subtitle }}</p>
          <p class="ml-27 text-2xl font-normal font-semibold" style="color:#007470; font-size:1.7rem;">{{ getCurrentDate() }}</p>
        </div>
    </div>
</template>