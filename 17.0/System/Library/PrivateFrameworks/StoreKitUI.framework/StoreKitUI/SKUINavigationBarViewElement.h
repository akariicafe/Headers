@class NSArray, UIColor;

@interface SKUINavigationBarViewElement : SKUIViewElement

@property (readonly, nonatomic) BOOL hidesShadow;
@property (readonly, nonatomic) BOOL hidesBackButton;
@property (readonly, nonatomic) BOOL isTransparent;
@property (readonly, nonatomic) NSArray *mainViewElements;
@property (readonly, nonatomic) NSArray *navigationPalettes;
@property (readonly, nonatomic) UIColor *tintColor;

- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
