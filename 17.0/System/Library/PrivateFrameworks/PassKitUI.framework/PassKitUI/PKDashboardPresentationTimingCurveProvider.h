@class UICubicTimingParameters, UISpringTimingParameters;

@interface PKDashboardPresentationTimingCurveProvider : NSObject <UITimingCurveProvider>

@property (nonatomic) double fractionComplete;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long timingCurveType;
@property (readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
@property (readonly, nonatomic) UISpringTimingParameters *springTimingParameters;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
