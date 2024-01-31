@class NSString;

@interface CPSScaledImageView : UIImageView {
    struct CGSize { double width; double height; } _scaledImageSize;
    BOOL _needsUpdateScaledImageSize;
}

@property (retain, nonatomic) NSString *textStyleForScaling;

- (void)invalidateIntrinsicContentSize;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;

@end
