@class SXLayoutBlueprint;

@interface SXContainerComponentBlueprint : SXComponentBlueprint

@property (retain, nonatomic) SXLayoutBlueprint *layoutBlueprint;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setParentLayoutBlueprint:(id)a0;

@end
