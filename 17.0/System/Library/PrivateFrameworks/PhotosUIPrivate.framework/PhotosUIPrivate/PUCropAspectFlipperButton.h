@class CALayer;

@interface PUCropAspectFlipperButton : UIButton {
    CALayer *_pageLayer;
    CALayer *_selectionCheckboxLayer;
}

@property long long orientation;

- (void)traitCollectionDidChange:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;

@end
