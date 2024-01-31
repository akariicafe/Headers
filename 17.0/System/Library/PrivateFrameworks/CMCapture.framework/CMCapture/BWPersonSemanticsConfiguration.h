@interface BWPersonSemanticsConfiguration : BWInferenceConfiguration

@property (nonatomic) unsigned int enabledSemantics;
@property (nonatomic) BOOL appliesFinalCropRect;

+ (unsigned int)personSemanticForAttachedMediaKey:(id)a0;

@end
