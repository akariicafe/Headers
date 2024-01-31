@class NSString;

@interface CPSEntityMapButton : CPSActionButton <CPSActionButtonLayoutDelegate>

@property (nonatomic) unsigned long long entityMapButtonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonWithEntityMapButtonType:(unsigned long long)a0;

- (struct CGSize { double x0; double x1; })buttonSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)buttonAttributes;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (id)buttonBackgroundColor;
- (struct CGSize { double x0; double x1; })buttonGlyphSize;
- (id)buttonImageTintColor;

@end
