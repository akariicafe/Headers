@class UITextFieldBackgroundView;

@interface _UITextFieldSystemBackgroundProvider : _UITextFieldViewBackgroundProvider {
    UITextFieldBackgroundView *_systemBackgroundView;
}

+ (id)systemStyleMetricsProvider;

- (long long)associatedBorderStyle;
- (void)removeFromTextField;
- (id)preferredMetricsProvider;
- (id)overridingSetBackgroundColor:(id)a0;
- (void)addToTextField:(id)a0;
- (void)_buildDescription:(id)a0;
- (id)overridingGetBackgroundColor;
- (void)setProgress:(double)a0;
- (void)enabledDidChangeAnimated:(BOOL)a0;
- (id)backgroundView;
- (Class)systemBackgroundViewClass;
- (void).cxx_destruct;

@end
