@class NSNumber;

@interface CSBackgroundComponent : CSComponent

@property (nonatomic) NSNumber *style;
@property (nonatomic) double transitionProgress;

- (id)init;
- (id)style:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
