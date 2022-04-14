REDUCTIONS = reduction_strength_00.s \
	reduction_strength_O1.s \
	reduction_strength_O2.s \
	reduction_strength_O3.s

INLINES = inline_opt_00.s \
	inline_opt_O1.s \
	inline_opt_O2.s

FACTORIALS = factorial_main_00.s \
	factorial_main_O1.s \
	factorial_main_O2.s \
	factorial_main_O3.s \
	factorial_recurs_00.s \
	factorial_recurs_O1.s \
	factorial_recurs_O2.s \
	factorial_recurs_O3.s

all: $(REDUCTIONS) $(INLINES) $(FACTORIALS)

reduction_strength_00.s: reduction_strength.c
	gcc -S $< -o $@

reduction_strength_O1.s: reduction_strength.c
	gcc -O1 -S $< -o $@

reduction_strength_O2.s: reduction_strength.c
	gcc -O2 -S $< -o $@

reduction_strength_O3.s: reduction_strength.c
	gcc -O3 -S $< -o $@

inline_opt_00.s: inline_opt.c
	gcc -S $< -o $@

inline_opt_O1.s: inline_opt.c
	gcc -O1 -S $< -o $@

inline_opt_O2.s: inline_opt.c
	gcc -O2 -S $< -o $@

factorial_recurs_00.s: fact_recurs.c
	gcc -S $< -o $@

factorial_recurs_O1.s: fact_recurs.c
	gcc -O1 -S $< -o $@

factorial_recurs_O2.s: fact_recurs.c
	gcc -O2 -S $< -o $@

factorial_recurs_O3.s: fact_recurs.c
	gcc -O3 -S $< -o $@

factorial_main_00.s: fact_main.c
	gcc -S $< -o $@

factorial_main_O1.s: fact_main.c
	gcc -O1 -S $< -o $@

factorial_main_O2.s: fact_main.c
	gcc -O2 -S $< -o $@

factorial_main_O3.s: fact_main.c
	gcc -O3 -S $< -o $@

clean:
	$(RM) $(REDUCTIONS)
	$(RM) $(INLINES)
	$(RM) $(FACTORIALS)
