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
layout: sgcc_index
background: /assets/sgcc_title_bg.png
headtitle: 光明电力大模型研发进展及应用介绍
subtitle: 中国电力科学研究院有限公司
---

# 光明电力大模型研发进展及应用介绍

---
theme: default
fonts:
  sans: Microsoft YaHei
  serif: Noto Serif SC
layout: sgcc_catalogue
title: 目录
englishtitle: Content
---

# 目录


---

## 研发进展
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

## 研发进展
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

## 研发进展
### 1.1 光明电力大模型建设
<div class="grid grid-cols-3 mt-15">

<TextCard title="基础通用大模型">

通过学习自然科学、社会科学、法律法规、教育培训、生活常识、文化艺术等广泛知识文档，理解掌握学科基本知识、基本技能， **具备基础通用知识的常识记忆、阅读理解和逻辑推理能力** 。

</TextCard>

<TextCard title="电力行业大模型">

通过学习电力教材、书籍、标准、规章制度、政策、资讯、公文、通知、公告等行业通识文档，理解电力行业的基础概念、机理与程序步骤，**具备电力通识基础认知、机理过程思维与知识推理能力**。

</TextCard>

<TextCard title="专业应用模型">

通过学习电力设备台账、缺陷记录、故障案例、客服对话记录等实际业务系统和案例报告，融合电力行业大模型迁移泛化能力，**掌握电力业务知识生成推理，具备解决电力实际业务应用问题的能力**。

</TextCard>

</div>

---

## 研发进展
### 1.1 光明电力大模型建设

<div class="grid grid-cols-1 mt-15">

在总部数字化部统一组织以及相关业务部门指导下，在国网大数据中心、国网信通公司、信产、南瑞及相关省公司等单位大力支持下，中国电科牵头，历时11个月高质量**完成光明电力大模型构建**。11月8日通过**中央网信办备案**，12月19日**正式发布**。

</div>

---

## 研发进展
### 1.2 光明大模型研发情况
#### 算力

<div class="grid grid-cols-1 mt-15">

构建了“**高性能计算、高性能网络、高性能存储**”大模型训练环境，自主研发电力大模型训练平台及部分工具，实现了对A100、A800、H100、910B 等异构算力统一纳管及按需分配，有力支撑了**340亿**开源电力行业语义大模型、 **1100亿**闭源电力行业语义大模型、**4亿**电力行业视觉大模型预训练，以及设备、营销等专业应用模型研发。

</div>
