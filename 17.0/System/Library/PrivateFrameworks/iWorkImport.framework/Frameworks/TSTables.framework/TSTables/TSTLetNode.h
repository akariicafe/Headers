@class NSString;

@interface TSTLetNode : TSTExpressionNode

@property (retain, nonatomic) NSString *whitespaceAfterLet;
@property (retain, nonatomic) NSString *whitespaceAfterIdentifier;
@property (retain, nonatomic) NSString *whitespaceAfterEquals;
@property (retain, nonatomic) NSString *whitespaceAfterDelimiter;

+ (id)defaultNameWithIndex:(unsigned int)a0;
+ (id)letString;
+ (id)newBareLetNodeWithContext:(id)a0;

- (id)string;
- (void).cxx_destruct;
- (void)setChildren:(id)a0;
- (int)tokenType;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)addAllIdentifiersToSymbolTable:(void *)a0;
- (void)addVariablesMatchingPrefix:(id)a0 forFormulaIndex:(unsigned long long)a1 toDictionary:(id)a2 symbolTable:(void *)a3;
- (void *)argumentSpec;
- (unsigned int)boundSymbol;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 hostCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 symbolTable:(void *)a2;
- (id)copyByResolvingIdentifiers:(id)a0 hostTable:(id)a1 baseHostCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2 forceReferenceInterpretation:(BOOL)a3 symbolTable:(void *)a4 oldToNewNodeMap:(id)a5;
- (id)formulaPlainText;
- (id)initAsCopyOf:(id)a0 intoContext:(id)a1 children:(id)a2;
- (id)initWithContext:(id)a0 children:(id)a1;
- (id)initWithContext:(id)a0 children:(id)a1 firstIndex:(unsigned long long)a2 lastIndex:(unsigned long long)a3;
- (void)insertFormulaText:(id)a0 includeWhitespace:(BOOL)a1;
- (BOOL)isEqualToExpressionNode:(id)a0;
- (void)p_fixupNodeIfFunctionNode:(id)a0;
- (struct TSTCSENodeData { unsigned long long x0; unsigned long long x1; })recordHashesForSubexpressions:(id)a0;

@end
