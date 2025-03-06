<template>
  <div class="catalogue">
    <div class="catalogue__container">
      <div class="catalogue__item" v-for="(item, index) in catalogue" :key="index">
        <div class="catalogue__item__image">
            <img :src="item.image" alt="catalogue image" />
        </div>
        <div class="catalogue__item__content">
            <h3 class="catalogue__item__content__title">{{ item.title }}</h3>
            <!-- <p class="catalogue__item__content__description">{{ item.description }}</p>-->
        </div>
      </div>
    </div>
  </div>

</template>
<script setup lang="ts">
import { ref } from 'vue'
const catalogue = ref([
    {
        image: '/assets/catalogue/1.png',
        title: '研发情况',
        // description: '介绍光明大模型的基本概念和应用场景',
    },
    {
        image: '/assets/catalogue/2.png',
        title: '应用案例',
        // description: '介绍光明大模型相对于传统模型的优势',
    },
    {
        image: '/assets/catalogue/3.png',
        title: '模型运营',
        //description: '介绍光明大模型在电力行业的应用',
    },
    {
        image: '/assets/catalogue/4.png',
        title: '下步计划',
        // description: '展望光明大模型在未来的发展',
    }
])
</script>