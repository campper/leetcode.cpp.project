<template>
    <div ref="chart" style="width: 100%; height: 230px;"></div>
  </template>
  
  <script setup>
  import { ref, onMounted } from 'vue'
  import * as echarts from 'echarts'
  
  const chart = ref(null)
  
  onMounted(() => {
    const myChart = echarts.init(chart.value)
    const newdata = [3000, 3000, 3000, 3000, 3000, 3000]
    // const newdata = [Math.round(Math.random() * 1000)]
    const option = {
      radar: {
        indicator: [
          { name: '1', max: 5000 },
          { name: '2', max: 5000 },
          { name: '3', max: 5000 },
          { name: '4', max: 5000 },
          { name: '5', max: 5000 },
          { name: '6', max: 5000 }
        ]
      },
      series: [{
        name: 'Budget vs spending',
        type: 'radar',
        color: ["#01796a", "#f3a333"],
        data: [
          {
            value: newdata,
            name: 'Allocated Budget'
          },
          {
            value: [3300, 3300, 3300, 3300, 3300, 3300],
            name: 'Actual Spending'
          }
        ]
      }]
    }
    myChart.setOption(option)
  })
  </script>