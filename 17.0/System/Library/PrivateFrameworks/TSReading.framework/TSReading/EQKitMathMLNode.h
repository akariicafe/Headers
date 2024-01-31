@class NSString;
@protocol EQKitLayoutNode;

@interface EQKitMathMLNode : NSObject <EQKitLayoutNode>

@property (nonatomic) id<EQKitLayoutNode> parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isNumber;
- (id)layoutStyleNode;
- (BOOL)isAttributeDefaultInheritableFromStyle:(int)a0;
- (BOOL)isBaseFontNameUsed;
- (BOOL)isEmbellishedOperator;
- (int)isOperatorPaddingRequired;
- (BOOL)isSpaceLike;
- (struct Schemata { void /* function */ **x0; int x1; id x2; id x3; })layoutSchemata;
- (id)operatorCore;
- (long long)scriptLevelWithBase:(long long)a0;

@end
