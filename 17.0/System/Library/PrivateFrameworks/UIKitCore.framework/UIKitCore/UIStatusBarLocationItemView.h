@interface UIStatusBarLocationItemView : UIStatusBarItemView {
    int _iconType;
}

- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (id)_imageName;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;

@end
