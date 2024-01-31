@class SXComponentView, NSDate;

@interface SXComponentExposureTracking : NSObject

@property (readonly, weak, nonatomic) SXComponentView *componentView;
@property (readonly, nonatomic) unsigned long long traits;
@property (readonly, copy, nonatomic) id /* block */ exposureStateChangeBlock;
@property (readonly, copy, nonatomic) id /* block */ conditionBlock;
@property (readonly, nonatomic) double visibilityFactor;
@property (nonatomic) double minimumVisibleY;
@property (nonatomic) double maximumVisibleY;
@property (nonatomic) long long lastObservedVisibilityState;
@property (readonly, nonatomic) NSDate *lastStateChange;

+ (id)exposureTrackingWithComponent:(id)a0 traits:(unsigned long long)a1 exposureStateChangeBlock:(id /* block */)a2 conditionBlock:(id /* block */)a3;

- (void).cxx_destruct;
- (void)calculateVisibilityFactor;
- (id)initWithComponent:(id)a0 traits:(unsigned long long)a1 exposureStateChangeBlock:(id /* block */)a2 conditionBlock:(id /* block */)a3;

@end
