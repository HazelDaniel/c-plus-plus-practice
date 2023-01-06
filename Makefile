.PHONY: clean All

All:
	@echo "----------Building project:[ first_cplusplus_practice - Debug ]----------"
	@"$(MAKE)" -f  "first_cplusplus_practice.mk"
clean:
	@echo "----------Cleaning project:[ first_cplusplus_practice - Debug ]----------"
	@"$(MAKE)" -f  "first_cplusplus_practice.mk" clean
