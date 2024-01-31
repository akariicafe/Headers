@class PHASEEnvelope, PHASENumberMetaParameterDefinition;

@interface PHASEMappedMetaParameterDefinition : PHASENumberMetaParameterDefinition

@property (readonly, nonatomic) PHASEEnvelope *envelope;
@property (readonly, nonatomic) PHASENumberMetaParameterDefinition *inputMetaParameterDefinition;
@property (readonly, nonatomic) double minimum;
@property (readonly, nonatomic) double maximum;

+ (id)new;

- (id)init;
- (id)initWithValue:(double)a0;
- (void).cxx_destruct;
- (id)initWithInputMetaParameterDefinition:(id)a0 envelope:(id)a1;
- (id)initWithInputMetaParameterDefinition:(id)a0 envelope:(id)a1 identifier:(id)a2;
- (id)initWithInputMetaParameterDefinition:(id)a0 envelope:(id)a1 uid:(id)a2;
- (id)initWithValue:(double)a0 identifier:(id)a1;
- (id)initWithValue:(double)a0 minimum:(double)a1 maximum:(double)a2;
- (id)initWithValue:(double)a0 minimum:(double)a1 maximum:(double)a2 identifier:(id)a3;

@end
