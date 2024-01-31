@class CAFilter;

@interface PKBlurView : UIView {
    CAFilter *_filter;
}

@property (nonatomic) double blurRadius;

- (BOOL)_shouldAnimatePropertyAdditivelyWithKey:(id)a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void).cxx_destruct;

@end
