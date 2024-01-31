@class UICubicTimingParameters;

@interface MPCubicSpringTimingParameters : UISpringTimingParameters

@property (copy, nonatomic) UICubicTimingParameters *springCubicTimingParameters;

+ (id)standardTimingParameters;

- (id)cubicTimingParameters;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
