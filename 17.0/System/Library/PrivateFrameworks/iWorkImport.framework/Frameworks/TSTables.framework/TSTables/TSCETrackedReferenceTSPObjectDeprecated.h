@interface TSCETrackedReferenceTSPObjectDeprecated : TSPObject {
    struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *mAST;
    struct { unsigned long formulaID : 48; } mFormulaID;
}

- (void)dealloc;
- (void)saveToArchiver:(id)a0;
- (void)encodeToArchive:(void *)a0;
- (BOOL)validatedLoadFromUnarchiver:(id)a0;
- (struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)ast;
- (struct { unsigned long x0 : 48; })formulaID;

@end
