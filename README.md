
# 🃏 Super Trunfo - C

Este projeto é uma versão simples do jogo **Super Trunfo**, desenvolvida em linguagem **C**.
O objetivo é comparar cartas de cidades utilizando diferentes atributos, e cada comparação indica qual cidade vence em determinado critério.

---

## 📋 Regras do Jogo

Cada carta possui os seguintes atributos:

- **Estado**
- **Código**
- **Nome da Cidade**
- **População**
- **Área (km²)**
- **PIB (R$)**
- **Número de Pontos Turísticos**
- **Densidade Populacional (hab/km²)**
- **PIB per Capita (R$)**
- **Super Poder** (soma de todos os atributos principais)

As comparações seguem as seguintes regras:
- **População, Área, PIB, Pontos Turísticos, PIB per Capita e Super Poder** → **maior valor vence**.
- **Densidade Populacional** → **menor valor vence**.

O programa compara automaticamente duas cartas e mostra os resultados.

---

## ⚙️ Como Compilar e Executar

### Pré-requisitos
- Sistema **Linux (Ubuntu ou similar)**
- Compilador **GCC** instalado

Verifique se o GCC está instalado com:
```bash
gcc --version