<p align="left"><img alt="OSPTEK" src="./images/logo.png" width="200" /></p>

<h1 align="center">OSPTEK 1.78″ AMOLED 368×448（CO5300 · QSPI）</h1>

<p align="center"><b>AMOLED 模组 · QSPI · CO5300 · 电容触摸</b></p>

<p align="center"><a href="./README_EN.md">English</a> | 简体中文 · <a href="../../README.md">规格族索引</a></p>

<p align="center">
  <img alt="Size: 1.78 inch" src="https://img.shields.io/badge/Size-1.78%22-3498DB?style=flat-square" />
  <img alt="Resolution: 368x448" src="https://img.shields.io/badge/Resolution-368%C3%97448-8E44AD?style=flat-square" />
  <img alt="Interface: QSPI" src="https://img.shields.io/badge/Interface-QSPI-27AE60?style=flat-square" />
  <img alt="Driver: CO5300" src="https://img.shields.io/badge/Driver-CO5300-E7352C?style=flat-square" />
</p>

<p align="center"><img alt="OSPTEK 1.78 寸 368×448 AMOLED QSPI 模组（CO5300）宣传图" src="./images/product.png" width="640" /></p>

## 目录

- [产品简介](#产品简介)
- [规格参数](#规格参数)
- [示例工程](#示例工程)
- [仓库结构](#仓库结构)
- [相关资料](#相关资料)
- [购买链接](#购买链接)
- [技术支持](#技术支持)

---

## 产品简介

OSPTEK **1.78 寸 368×448 AMOLED** 是一款 **QSPI** 接口彩色显示模组，显示驱动为 **CO5300**，触摸驱动为 **CHSC6417**。适合手持终端、穿戴与小型竖屏 HMI 等场景。

规格标识（仓库名）：`amoled-1.78-368x448-qspi-co5300`

当前模组版本：**AM178Q368448LK**。电气与外形细节以 [`docs/AM178Q368448LK.pdf`](./docs/AM178Q368448LK.pdf) 为准。

## 规格参数

| 项目 | 规格 |
| ---- | ---- |
| 尺寸 | 1.78 英寸 |
| 类型 | AMOLED（彩色） |
| 分辨率 | 368×448 |
| 接口 | QSPI |
| 驱动 IC | CO5300 |
| 触摸驱动 | CHSC6417 |

> 完整外形尺寸、FPC 定义、供电与时序以产品规格书 / 驱动手册为准。

## 示例工程

| 说明 | 路径 |
| ---- | ---- |
| ESP32-S3 · CO5300 QSPI + CHSC6417 + LVGL | [`examples/esp32s3-amoled-1.78-368x448-qspi-co5300-bringup/`](./examples/esp32s3-amoled-1.78-368x448-qspi-co5300-bringup/) |

## 仓库结构

```text
amoled-1.78-368x448-qspi-co5300/                                # 仓库根（导航见 ../../README.md）
└── versions/
    └── AM178Q368448LK/                                # 本料号完整资料
        ├── README.md
        ├── README_EN.md
        ├── images/
        ├── docs/
        └── examples/
```

## 相关资料

### 本产品资料

| 资料 | 链接 |
| ---- | ---- |
| 产品规格书（AM178Q368448LK） | [`docs/AM178Q368448LK.pdf`](./docs/AM178Q368448LK.pdf) |
| 驱动 IC 数据手册（CO5300） | [`docs/CO_5300_Datasheet_V0_00_20230328_07edb82936.pdf`](./docs/CO_5300_Datasheet_V0_00_20230328_07edb82936.pdf) |
| 触摸 IC 数据手册（CHSC6417） | [`docs/DS_CHSC_6417_EU_24_v1_3_1_f66256c159.pdf`](./docs/DS_CHSC_6417_EU_24_v1_3_1_f66256c159.pdf) |
| 初始化序列（文本） | [`docs/EDO1.78_368x448_CO5300_20221026 简码.txt`](./docs/EDO1.78_368x448_CO5300_20221026%20%E7%AE%80%E7%A0%81.txt) |
| 转接板原理图（1.96 / 1.78 共用 V1.0） | [`docs/转接板1 原理图1.96_1.78_AMOLED转接板V1.0.pdf`](./docs/%E8%BD%AC%E6%8E%A5%E6%9D%BF1%20%E5%8E%9F%E7%90%86%E5%9B%BE1.96_1.78_AMOLED%E8%BD%AC%E6%8E%A5%E6%9D%BFV1.0.pdf) |
| 1.78 demo 转接板原理图 | [`docs/转接板2 原理图-1.78demo转接板.pdf`](./docs/%E8%BD%AC%E6%8E%A5%E6%9D%BF2%20%E5%8E%9F%E7%90%86%E5%9B%BE-1.78demo%E8%BD%AC%E6%8E%A5%E6%9D%BF.pdf) |
| 连接器规格书（OK-14F024-04） | [`docs/OK-14F024-04.pdf`](./docs/OK-14F024-04.pdf) |
| 外形图纸（DWG） | [`docs/AM178Q368448LK1.dwg`](./docs/AM178Q368448LK1.dwg) |

### 示例工程

- [ESP32-S3 CO5300 QSPI + CHSC6417 + LVGL](./examples/esp32s3-amoled-1.78-368x448-qspi-co5300-bringup/)

## 购买链接

<p align="center">
  <a href="https://shop110742373.taobao.com/"><img alt="淘宝官方店铺" src="https://img.shields.io/badge/淘宝-官方店铺-FF6A00?style=for-the-badge" /></a>
  &nbsp;&nbsp;
  <a href="https://www.aliexpress.com/store/1105701619"><img alt="速卖通官方店铺" src="https://img.shields.io/badge/速卖通-官方店铺-FF6A00?style=for-the-badge" /></a>
</p>

**国内（淘宝）**

- 店铺：[鱼鹰光电工厂店](https://shop110742373.taobao.com/)

**海外（AliExpress）**

- 店铺：[OSPTEK Official Store](https://www.aliexpress.com/store/1105701619)

## 技术支持

- 技术支持 / 产品咨询：<luyu@osptek.com>
- QQ 技术交流群：**985881096**
- 公司官网：<https://osptek.com/>
- 有任何问题，都可以在本仓库 Issues 中提问

---

<p align="center"><sub>© 2026 OSPTEK 鱼鹰光电 · 本仓库资料采用 CC BY 4.0 许可</sub></p>
