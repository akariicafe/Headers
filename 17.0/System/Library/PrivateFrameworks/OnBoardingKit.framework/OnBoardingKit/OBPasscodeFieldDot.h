@interface OBPasscodeFieldDot : UIView

@property (nonatomic, getter=isFilled) BOOL filled;

- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateView;

@end
