#ifndef BIGN_H
#define BIGN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

struct bign {
  uint32_t *data;
  size_t capacity;
  size_t size;
};


void bign_create_empty(struct bign *self);
void bign_create_from_value(struct bign *self, uint32_t val);
void bign_create_from_string(struct bign *self, const char *str);

void bign_copy_from_other(struct bign *self, const struct bign *other);
void bign_move_from_other(struct bign *self, struct bign *other);

void bign_destroy(struct bign *self);

void bign_print(const struct bign *self);

int bign_cmp(const struct bign *lhs, const struct bign *rhs);
int bign_cmp_zero(const struct bign *self);

void bign_add(struct bign *self, const struct bign *lhs, const struct bign *rhs);
void bign_sub(struct bign *self, const struct bign *lhs, const struct bign *rhs);

void bign_mul(struct bign *self, const struct bign *lhs, const struct bign *rhs);
void bign_mul_karatsuba(struct bign *self, const struct bign *lhs, const struct bign *rhs);
void bign_mul_short(struct bign *self, const struct bign *lhs, uint32_t rhs);

void bign_div_short(struct bign *quo, uint32_t *rem, const struct bign *lhs, uint32_t rhs);
void bign_div(struct bign *quo, struct bign *rem, const struct bign *lhs, const struct bign *rhs);

void bign_exp(struct bign *self, const struct bign *lhs, const struct bign *rhs);

#ifdef __cplusplus
}
#endif


#endif // BIG_H
