#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

enum A {
  a1 = 0,
  a2 = 2,
  a3 = 3,
  a4 = 5,
};
typedef uint32_t A;

enum B {
  b1 = 0,
  b2 = 2,
  b3 = 3,
  b4 = 5,
};
typedef uint16_t B;

enum C {
  c1 = 0,
  c2 = 2,
  c3 = 3,
  c4 = 5,
};
typedef uint8_t C;

enum D {
  d1 = 0,
  d2 = 2,
  d3 = 3,
  d4 = 5,
};
typedef uintptr_t D;

enum E {
  e1 = 0,
  e2 = 2,
  e3 = 3,
  e4 = 5,
};
typedef intptr_t E;

enum F_Tag {
  Foo = 0,
  Bar = 1,
  Baz = 2,
};
typedef uint8_t F_Tag;

typedef struct {
  F_Tag tag;
  int16_t _0;
} Foo_Body;

typedef struct {
  F_Tag tag;
  uint8_t x;
  int16_t y;
} Bar_Body;

typedef union {
  F_Tag tag;
  Foo_Body Foo;
  Bar_Body Bar;
} F;

typedef struct Opaque Opaque;

void root(Opaque *o, A a, B b, C c, D d, E e, F f);
