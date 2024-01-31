@class _UITextFieldImageBackgroundView;

@interface _UITextFieldImageBackgroundProvider : _UITextFieldViewBackgroundProvider {
    _UITextFieldImageBackgroundView *_backgroundView;
}

- (void)layoutIfNeeded;
- (void)setNeedsDisplay;
- (void)addToTextField:(id)a0;
- (void)enabledDidChangeAnimated:(BOOL)a0;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)_applyCorrectImage;

@end
