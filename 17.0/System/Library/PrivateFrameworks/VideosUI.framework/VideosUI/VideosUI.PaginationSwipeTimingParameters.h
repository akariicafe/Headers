@class UICubicTimingParameters, UISpringTimingParameters;

@interface VideosUI.PaginationSwipeTimingParameters : NSObject <UITimingCurveProvider> {
    void /* unknown type, empty encoding */ swipeAnimationType;
}

@property (nonatomic, readonly) long long timingCurveType;
@property (nonatomic, readonly) UICubicTimingParameters *cubicTimingParameters;
@property (nonatomic, readonly) UISpringTimingParameters *springTimingParameters;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
