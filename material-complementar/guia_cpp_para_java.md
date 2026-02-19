# 📘 Guia de Transição de C++ para Java

**Autor:** Prof. João Gustavo Camilo Júnior

Este guia foi desenvolvido para estudantes que já possuem base em lógica de programação em C++ e desejam aprender Java de forma estruturada, clara e profissional.

---

# 🧠 1. Mentalidade de Transição

Se você já sabe C++, você já sabe programar.

O objetivo agora é aprender **como expressar a mesma lógica em Java**.

| Aspecto   | C++             | Java                     |
| --------- | --------------- | ------------------------ |
| Paradigma | Procedural + OO | 100% Orientado a Objetos |
| Execução  | Binário         | Bytecode + JVM           |
| Memória   | Manual          | Garbage Collector        |
| Estrutura | Flexível        | Tudo dentro de classes   |

👉 **Resumo:**

- C++ = liberdade
- Java = organização

---

# ⚙️ 2. Como o Código Executa

## C++

```bash
codigo.cpp -> g++ -> executavel -> roda
```

## Java

```bash
Main.java -> javac -> Main.class -> JVM -> roda
```

---

# 📁 3. Estrutura de Arquivos

```java
// Arquivo: Main.java
public class Main {
}
```

---

# 👋 4. Hello World

## C++

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World" << endl;
    return 0;
}
```

## Java

```java
public class Main {
    public static void main(String[] args) {
        System.out.println("Hello World");
    }
}
```

---

# 🔢 5. Tipos

| C++    | Java    |
| ------ | ------- |
| int    | int     |
| double | double  |
| bool   | boolean |
| string | String  |

---

# 🔁 6. Controle

```java
if (x > 10) {}

for (int i = 0; i < 10; i++) {}
```

---

# 🔧 7. Métodos

## C++

```cpp
int soma(int a, int b) {
    return a + b;
}
```

## Java

```java
public static int soma(int a, int b) {
    return a + b;
}
```

---

# 📦 8. Arrays

```java
int[] arr = {1,2,3,4,5};
arr.length
```

---

# 🔍 9. Busca Linear

## Java

```java
public static int buscaLinear(int[] arr, int alvo) {
    for (int i = 0; i < arr.length; i++) {
        if (arr[i] == alvo) {
            return i;
        }
    }
    return -1;
}
```

---

# 🧠 10. Memória

- C++ → manual
- Java → Garbage Collector

---

# 📚 11. Documentação

Sempre consulte a documentação oficial do Java.

---

# 🎯 Conclusão

A lógica é a mesma. A estrutura muda.
