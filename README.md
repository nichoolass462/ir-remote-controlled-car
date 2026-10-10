# Project Overview
An IR remote controlled car driven with L298N motor driver module with Arduino Uno R3 as the car controller

The system schematic can be found on `docs/schematics`

The demo video can be found on `media`

# System Overview 
- The Arduino Uno is powered with the 2S Lithium-Ion Battery (7.4V)
- The IR Remote Receiver receives signal from the IR remote
- The L298N motor driver drives the motor based on the buttons pressed
- The Ultrasonic Sensor seen in the demo is not utilized

## Components

| Qty | Component | Datasheet / Product Page |
|---|---|---|
| 1 | Arduino Uno R3 | [Datasheet](https://docs.arduino.cc/resources/datasheets/A000066-datasheet.pdf?_gl=1*tkex9c*_up*MQ..*_ga*MTQwNTQ5MTYxOS4xNzkxNjMyNzgw*_ga_NEXN8H46L5*czE3OTE2MzI3NzckbzEkZzAkdDE3OTE2MzI3NzckajYwJGwwJGgzMTQxNzcwMjE.) |
| 1 | L298N Motor Driver | [Datasheet](https://components101.com/modules/l293n-motor-driver-module) |
| 2 | TT DC Gear Motor | [Datasheet](https://media.digikey.com/pdf/Data%20Sheets/Adafruit%20PDFs/3777_Web.pdf) |
| 1 | KY-022 IR Receiver Module | [Datasheet](https://intesc.mx/wp-content/uploads/2021/06/KY022.pdf) |
| 1 | IR Remote Control | N/A |
| 2 | 3.7V Lithium-Ion Battery | [Product Page](https://www.aliexpress.com/item/1005009795367952.html?spm=a2g0o.productlist.main.9.1dc114c5kI21Eh&algo_pvid=f43ce873-cc31-4baf-8625-f48f787f0863&algo_exp_id=f43ce873-cc31-4baf-8625-f48f787f0863-8&pdp_ext_f=%7B%22order%22%3A%2256%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21IDR%21121304.00%2119899.00%21%21%2144.51%217.30%21%400bafc98f17916333697365978e0e64%2112000050188574230%21sea%21MY%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3A50b5042e%3Bm03_new_user%3A-29895%3BpisId%3A5000000216900887&curPageLogUid=CZtf0TzEcFdV&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005009795367952%7C_p_origin_prod%3A) |
| 1 | Acrylic Chassis Kit | [Product Page](https://www.aliexpress.com/item/1005009317446165.html?spm=a2g0o.productlist.main.7.31bf3883QVFbZT&algo_pvid=b4e55ec9-d306-42d1-be86-47cdb91c0d8b&algo_exp_id=b4e55ec9-d306-42d1-be86-47cdb91c0d8b-6&pdp_ext_f=%7B%22order%22%3A%224%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21IDR%21106251.00%2196758.00%21%21%215.82%215.30%21%4021410daa17916473460927197e0e39%2112000048730068356%21sea%21ID%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3A5c92f364%3Bm03_new_user%3A-29895&curPageLogUid=7NmpjReTUOGj&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005009317446165%7C_p_origin_prod%3A&_gl=1*1jp4n24*_gcl_au*ODUyNDQxNTc3LjE3OTE2MjIxNDk.*_ga*MTU5MTc3OTM4Mi4xNzkxNjIyMTQ5*_ga_VED1YSGNC7*czE3OTE2MjIxNDkkbzEkZzEkdDE3OTE2MjIxODAkajI5JGwwJGgw&gatewayAdapt=idn2glo) |
