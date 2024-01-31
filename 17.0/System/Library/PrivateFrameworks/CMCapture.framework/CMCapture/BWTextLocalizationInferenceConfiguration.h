@interface BWTextLocalizationInferenceConfiguration : BWBoundingBoxInferenceConfiguration

@property (nonatomic) struct { unsigned short major; unsigned short minor; unsigned short patch; } version;

+ (id)configuration;

- (id)initWithInferenceType:(int)a0 version:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a1;

@end
