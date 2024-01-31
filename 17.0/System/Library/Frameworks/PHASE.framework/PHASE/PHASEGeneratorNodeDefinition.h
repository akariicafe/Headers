@class PHASENumberMetaParameterDefinition, PHASEMixerDefinition, PHASEGroup;

@interface PHASEGeneratorNodeDefinition : PHASESoundEventNodeDefinition

@property (nonatomic) double gain;
@property (readonly) long long calibrationMode;
@property (readonly) double level;
@property (nonatomic) double rate;
@property (weak, nonatomic) PHASEGroup *group;
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *gainMetaParameterDefinition;
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *rateMetaParameterDefinition;
@property (readonly, nonatomic) PHASEMixerDefinition *mixerDefinition;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initInternal:(id)a0;
- (void)setCalibrationMode:(long long)a0 level:(double)a1;

@end
