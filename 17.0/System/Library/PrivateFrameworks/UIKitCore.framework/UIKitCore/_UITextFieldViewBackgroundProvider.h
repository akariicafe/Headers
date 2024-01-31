@class UIView;

@interface _UITextFieldViewBackgroundProvider : _UITextFieldBackgroundProvider

@property (readonly, nonatomic) UIView *backgroundView;

- (void)didChangeFirstResponder;
- (void)removeFromTextField;
- (void)populateArchivedSubviews:(id)a0;
- (void)layoutIfNeeded;
- (void)setNeedsDisplay;
- (BOOL)hitTestView:(id)a0;
- (id)overridingSetBackgroundColor:(id)a0;
- (void)addToTextField:(id)a0;
- (void)_buildDescription:(id)a0;

@end
