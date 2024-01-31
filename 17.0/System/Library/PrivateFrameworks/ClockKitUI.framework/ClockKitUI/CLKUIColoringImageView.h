@class UIColor, NSString, CLKImageProvider;

@interface CLKUIColoringImageView : UIImageView <CLKUIColoringView>

@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (retain, nonatomic) CLKImageProvider *imageProvider;
@property (nonatomic) long long symbolImageType;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)color;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithImage:(id)a0;
- (void)setColor:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)_commonInit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithImage:(id)a0 highlightedImage:(id)a1;
- (void)setUsesLegibility:(BOOL)a0;
- (BOOL)usesLegibility;

@end
