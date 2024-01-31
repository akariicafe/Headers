@interface TSTOperatorNode : TSTExpressionNode

@property (nonatomic) unsigned short operatorChar;

- (id)string;
- (int)tokenType;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void *)argumentSpec;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 hostCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 symbolTable:(void *)a2;
- (BOOL)forceReferenceInterpretationOfChildren;
- (id)initAsCopyOf:(id)a0 intoContext:(id)a1 children:(id)a2;
- (id)initWithContext:(id)a0 children:(id)a1;
- (id)initWithContext:(id)a0 operatorChar:(unsigned short)a1 children:(id)a2 firstIndex:(unsigned long long)a3 lastIndex:(unsigned long long)a4;
- (void)insertFormulaText:(id)a0 includeWhitespace:(BOOL)a1;
- (BOOL)isEqualToExpressionNode:(id)a0;
- (struct TSTCSENodeData { unsigned long long x0; unsigned long long x1; })recordHashesForSubexpressions:(id)a0;

@end
