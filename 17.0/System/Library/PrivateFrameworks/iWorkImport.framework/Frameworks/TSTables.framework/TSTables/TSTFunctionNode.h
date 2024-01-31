@class NSString, TSTFunctionEndNode, NSArray;

@interface TSTFunctionNode : TSTExpressionNode {
    TSTFunctionEndNode *_functionEndNode;
}

@property (readonly, nonatomic) unsigned short functionIndex;
@property (retain, nonatomic) TSTFunctionEndNode *functionEndNode;
@property (readonly, nonatomic) unsigned long long numArguments;
@property (readonly, nonatomic) short minArguments;
@property (readonly, nonatomic) short maxArguments;
@property (retain) NSString *whitespaceAfterLeftParen;
@property (retain, nonatomic) NSArray *whitespaceAfterDelimiters;
@property (retain, nonatomic) NSString *whitespaceAfterFunctionName;
@property (retain, nonatomic) NSString *invalidFunctionName;
@property (readonly, nonatomic, getter=isInvalidFunction) BOOL invalidFunction;

+ (id)newSumNodeWithContext:(id)a0 children:(id)a1;
+ (id)newDefaultFunctionNodeWithContext:(id)a0 functionIndex:(unsigned short)a1;

- (id)string;
- (void).cxx_destruct;
- (void)setChildren:(id)a0;
- (int)tokenType;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)addTSTCanvasReferencesToSet:(id)a0 inRangeContext:(unsigned char)a1 withColorHelper:(id)a2 preferringNodesFromStorage:(id)a3 allVisitedNodes:(id)a4;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 hostCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 symbolTable:(void *)a2;
- (id)exportString;
- (id)formulaPlainText;
- (id)initAsCopyOf:(id)a0 intoContext:(id)a1 children:(id)a2;
- (id)initWithContext:(id)a0 children:(id)a1 firstIndex:(unsigned long long)a2 lastIndex:(unsigned long long)a3;
- (id)initWithContext:(id)a0 functionIndex:(unsigned short)a1 children:(id)a2 firstIndex:(unsigned long long)a3 lastIndex:(unsigned long long)a4;
- (void)insertFormulaText:(id)a0 includeWhitespace:(BOOL)a1;
- (void)insertFormulaText:(id)a0 includeWhitespace:(BOOL)a1 unwrapped:(BOOL)a2;
- (BOOL)isDescendantOfChild:(id)a0;
- (BOOL)isEmptyFunctionNode;
- (BOOL)isEqualToExpressionNode:(id)a0;
- (BOOL)isFunctionNode;
- (BOOL)isMissingRequiredArgument;
- (unsigned long long)lastIndexOfSubtree;
- (id)mostSpecificNodeContainingIndex:(unsigned long long)a0 correspondingIndex:(unsigned long long)a1;
- (id)p_functionSpec;
- (void)p_resetArgumentSpecForChildren;
- (struct TSTCSENodeData { unsigned long long x0; unsigned long long x1; })recordHashesForSubexpressions:(id)a0;
- (void)resurrectModeTokens;

@end
