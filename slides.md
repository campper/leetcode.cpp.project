---
theme: default
highlighter: shiki
drawings:
  persist: false
colorSchema: light
fonts:
  sans: Microsoft YaHei
  serif: Noto Serif SC
canvasWidth: 1080
layout: sggm_index
background: /assets/sgcc_title_bg.png
headtitle: 光明电力大模型研发进展及应用介绍
subtitle: 中国电力科学研究院有限公司
---

<style>
h1 {
  color: #FFF;
}
</style>

# 光明电力大模型研发进展及应用介绍

---
# theme: ./theme/sgcc/sgcc-theme-starter/
layout: catalogue
class: directory-page
fonts:
  sans: Microsoft YaHei
  serif: Noto Serif SC
---

# 目录

<ul class="directory-list">
  <li><a href="/3">研发情况</a></li>
  <li><a href="/3">应用案例</a></li>
</ul>

---

## 研发情况
### 1.1 光明电力大模型建设


<div class="grid grid-cols-1 mt-3">

<TextCard title="通用大模型技术验证">

- 2023年8月正式启动，**“以测代研”** 对国内头部通用大模型进行技术验证。通过验证：主流通用模型基础能力表现较好且差距不大，平均77.36分；电力专业能力不足，平均47.22分。
- 经过“增量预训练+微调”后，**知识问答检索场景** 明显提升，**生成推理场景** 略微提升。
- **系统工程：** 模型能力与 **基础参数规模、样本质量、训练策略、人员投入、工程优化** 等方面均相关。
</TextCard>
</div>

<div class="grid grid-cols-4">
<div class="grid grid-cols-1" style="width: 200px;height:200px;">
<RadarChart />
</div>
<div class="grid grid-cols-1" style="width: 200px;height:200px;">
<RadarChart />
</div>
<div class="grid grid-cols-1" style="width: 200px;height:200px;">
<RadarChart />
</div>
<div class="grid grid-cols-1" style="width: 200px;height:200px;">
<RadarChart />
</div>
</div>

---

## 研发情况
### 1.1 光明电力大模型建设

<div class="grid grid-cols-1 mt-15">
<TextCard title="研发路线">

通过充分调研论证，明确了 **“开闭源并行、预训练+微调”** 研发技术路线。
光明电力大模型是在通用基座模型基础上，**系统性进行增强训练和全参微调** ，注入大量电力专业知识和专家经验，致力于将一个多面手打造成为电力专家。

</TextCard>
</div>
<div class="grid grid-cols-3 mt-15">
</div>

---

## 研发情况
### 1.1 光明电力大模型建设
