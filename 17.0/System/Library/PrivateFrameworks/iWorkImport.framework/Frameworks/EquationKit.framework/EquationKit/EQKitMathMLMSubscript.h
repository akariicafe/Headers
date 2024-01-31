@class NSString;

@interface EQKitMathMLMSubscript : EQKitMathMLBinaryNode <EQKitLayoutSchemataSubsuperscript>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEmbellishedOperator;
- (struct Schemata { void /* function */ **x0; int x1; id x2; id x3; })layoutSchemata;
- (id)operatorCore;
- (id)schemataKernel;
- (id)schemataSubscript;
- (id)schemataSuperscript;

@end
