@class NSString, MDLMaterialProperty;

@interface MDLMaterialPropertyConnection : NSObject <MDLNamed>

@property (readonly, weak, nonatomic) MDLMaterialProperty *output;
@property (readonly, weak, nonatomic) MDLMaterialProperty *input;
@property (copy, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)initWithOutput:(id)a0 input:(id)a1;

@end
