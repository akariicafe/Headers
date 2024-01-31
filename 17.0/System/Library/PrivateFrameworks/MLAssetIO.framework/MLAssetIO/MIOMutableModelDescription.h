@class NSDictionary;

@interface MIOMutableModelDescription : MIOModelDescription

@property (copy, nonatomic) NSDictionary *metadata;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setShortDescription:(id)a0 forInputFeatureWithName:(id)a1;
- (void)setShortDescription:(id)a0 forOutputFeatureWithName:(id)a1;
- (void)setShortDescription:(id)a0 forTrainingInputFeatureWithName:(id)a1;

@end
