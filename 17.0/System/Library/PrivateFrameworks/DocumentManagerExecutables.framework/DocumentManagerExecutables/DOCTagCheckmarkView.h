@class NSString, UIImageView, NSLayoutConstraint, DOCTag;

@interface DOCTagCheckmarkView : UIView <DOCTagIconView> {
    NSLayoutConstraint *_heightConstraint;
    UIImageView *_imageView;
}

@property (retain, nonatomic) DOCTag *itemTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)checkmarkImage;

- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTintColor;
- (void).cxx_destruct;
- (void)updateForChangedTraitsAffectingFonts;

@end
