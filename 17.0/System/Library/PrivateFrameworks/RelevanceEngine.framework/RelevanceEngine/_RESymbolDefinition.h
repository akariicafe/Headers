@class NSString, NSDictionary, REScriptASTNode, REScriptToken;

@interface _RESymbolDefinition : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) REScriptToken *token;
@property (readonly, nonatomic) NSDictionary *options;
@property (retain, nonatomic) REScriptASTNode *value;
@property (retain, nonatomic) id objectValue;

- (void).cxx_destruct;
- (id)initWithToken:(id)a0 type:(unsigned long long)a1 options:(id)a2;

@end
