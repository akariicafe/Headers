@interface CRLineWrapperV1 : NSObject <CRLineWrapping>

- (id)_allLinesFromInput:(id)a0 blockMapping:(id *)a1;
- (BOOL)_shouldInsertLineBreakForResult:(id)a0 configuration:(id)a1 context:(id)a2;
- (void)computeLineWrappingForInput:(id)a0;
- (unsigned long long)lineWrappingTypeForResult:(id)a0 configuration:(id)a1 strictConfiguration:(id)a2 context:(id)a3;

@end
