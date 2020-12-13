#include "bigz.h"
#include <stdio.h>


void bigz_create_empty(struct bigz *self);
void bigz_create_from_value(struct bigz *self, int32_t val);
void bigz_create_from_string(struct bigz *self, const char *str, unsigned base);

void bigz_copy_from_other(struct bigz *self, const struct bigz *other);
void bigz_move_from_other(struct bigz *self, struct bigz *other);

void bigz_destroy(struct bigz *self);

void bigz_print(const struct bigz *self);

int bigz_cmp(const struct bigz *lhs, const struct bigz *rhs);
int bigz_cmp_zero(const struct bigz *self);

void bigz_add(struct bigz *self, const struct bigz *lhs, const struct bigz *rhs);
void bigz_sub(struct bigz *self, const struct bigz *lhs, const struct bigz *rhs);

void bigz_mul(struct bigz *self, const struct bigz *lhs, const struct bigz *rhs);
void bigz_div(struct bigz *quo, struct bigz *rem, const struct bigz *lhs, const struct bigz *rhs);

void bigz_gcd(struct bigz *self, const struct bigz *lhs, const struct bigz *rhs);


