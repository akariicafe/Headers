@class PHASENumberMetaParameterDefinition;

@interface PHASEMixerDefinition : PHASEDefinition

@property (nonatomic) double gain;
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *gainMetaParameterDefinition;

+ (id)new;

- (id)init;
- (id)initInternal;
- (void).cxx_destruct;

@end
