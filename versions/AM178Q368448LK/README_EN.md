<p align="left"><img alt="OSPTEK" src="./images/logo.png" width="200" /></p>

<h1 align="center">OSPTEK 1.78″ AMOLED 368×448 (CO5300 · QSPI)</h1>

<p align="center"><b>AMOLED module · QSPI · CO5300 · capacitive touch</b></p>

<p align="center"><a href="./README.md">简体中文</a> | English · <a href="../../README_EN.md">Family index</a></p>

<p align="center">
  <img alt="Size: 1.78 inch" src="https://img.shields.io/badge/Size-1.78%22-3498DB?style=flat-square" />
  <img alt="Resolution: 368x448" src="https://img.shields.io/badge/Resolution-368%C3%97448-8E44AD?style=flat-square" />
  <img alt="Interface: QSPI" src="https://img.shields.io/badge/Interface-QSPI-27AE60?style=flat-square" />
  <img alt="Driver: CO5300" src="https://img.shields.io/badge/Driver-CO5300-E7352C?style=flat-square" />
</p>

<p align="center"><img alt="OSPTEK 1.78 inch 368×448 AMOLED QSPI module (CO5300) product image" src="./images/product.png" width="640" /></p>

## Contents

- [Overview](#overview)
- [Specifications](#specifications)
- [Sample projects](#sample-projects)
- [Repository layout](#repository-layout)
- [Resources](#resources)
- [Buy](#buy)
- [Support](#support)

---

## Overview

OSPTEK **1.78″ 368×448 AMOLED** is a **QSPI** color display module driven by **CO5300**, with capacitive touch (**CHSC6417**). Suited to handheld devices, wearables, and compact portrait HMI.

Spec ID (repository name): `amoled-1.78-368x448-qspi-co5300`

Current module version: **AM178Q368448LK**. Electrical and mechanical details follow [`docs/AM178Q368448LK.pdf`](./docs/AM178Q368448LK.pdf).

## Specifications

| Item | Spec |
| ---- | ---- |
| Size | 1.78 inch |
| Type | AMOLED (color) |
| Resolution | 368×448 |
| Interface | QSPI |
| Driver IC | CO5300 |
| Touch driver | CHSC6417 |

> Full outline, FPC definition, power, and timing follow the product datasheet / driver IC datasheet.

## Sample projects

| Description | Path |
| ---- | ---- |
| ESP32-S3 · CO5300 QSPI + CHSC6417 + LVGL | [`examples/esp32s3-amoled-1.78-368x448-qspi-co5300-bringup/`](./examples/esp32s3-amoled-1.78-368x448-qspi-co5300-bringup/) |

## Repository layout

```text
amoled-1.78-368x448-qspi-co5300/                                # repo root (nav: ../../README_EN.md)
└── versions/
    └── AM178Q368448LK/                                # full materials for this part number
        ├── README.md
        ├── README_EN.md
        ├── images/
        ├── docs/
        └── examples/
```

## Resources

### Product files

| Resource | Link |
| ---- | ---- |
| Product datasheet (AM178Q368448LK) | [`docs/AM178Q368448LK.pdf`](./docs/AM178Q368448LK.pdf) |
| Driver IC datasheet (CO5300) | [`docs/CO_5300_Datasheet_V0_00_20230328_07edb82936.pdf`](./docs/CO_5300_Datasheet_V0_00_20230328_07edb82936.pdf) |
| Touch IC datasheet (CHSC6417) | [`docs/DS_CHSC_6417_EU_24_v1_3_1_f66256c159.pdf`](./docs/DS_CHSC_6417_EU_24_v1_3_1_f66256c159.pdf) |
| Init sequence (text) | [`docs/EDO1.78_368x448_CO5300_20221026 简码.txt`](./docs/EDO1.78_368x448_CO5300_20221026%20%E7%AE%80%E7%A0%81.txt) |
| Adapter schematic (1.96 / 1.78 shared V1.0) | [`docs/转接板1 原理图1.96_1.78_AMOLED转接板V1.0.pdf`](./docs/%E8%BD%AC%E6%8E%A5%E6%9D%BF1%20%E5%8E%9F%E7%90%86%E5%9B%BE1.96_1.78_AMOLED%E8%BD%AC%E6%8E%A5%E6%9D%BFV1.0.pdf) |
| 1.78 demo adapter schematic | [`docs/转接板2 原理图-1.78demo转接板.pdf`](./docs/%E8%BD%AC%E6%8E%A5%E6%9D%BF2%20%E5%8E%9F%E7%90%86%E5%9B%BE-1.78demo%E8%BD%AC%E6%8E%A5%E6%9D%BF.pdf) |
| Connector datasheet (OK-14F024-04) | [`docs/OK-14F024-04.pdf`](./docs/OK-14F024-04.pdf) |
| Mechanical drawing (DWG) | [`docs/AM178Q368448LK1.dwg`](./docs/AM178Q368448LK1.dwg) |

### Samples

- [ESP32-S3 CO5300 QSPI + CHSC6417 + LVGL](./examples/esp32s3-amoled-1.78-368x448-qspi-co5300-bringup/)

## Buy

<p align="center">
  <a href="https://www.aliexpress.com/store/1105701619"><img alt="AliExpress store" src="https://img.shields.io/badge/AliExpress-Official_Store-FF6A00?style=for-the-badge" /></a>
  &nbsp;&nbsp;
  <a href="https://shop110742373.taobao.com/"><img alt="Taobao store" src="https://img.shields.io/badge/Taobao-Official_Store-FF6A00?style=for-the-badge" /></a>
</p>

**Overseas (AliExpress)**

- Store: [OSPTEK Official Store](https://www.aliexpress.com/store/1105701619)

**China (Taobao)**

- Store: [鱼鹰光电工厂店](https://shop110742373.taobao.com/)

## Support

- Technical support / product inquiry: <luyu@osptek.com>
- QQ group (China): **985881096**
- Website: <https://osptek.com/>
- Feel free to open an Issue in this repository if you have any questions

---

<p align="center"><sub>© 2026 OSPTEK · Materials in this repository are licensed under CC BY 4.0</sub></p>
