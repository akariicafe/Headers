@class SKUICardViewElement, SKUIViewElementLayoutContext;

@interface SKUICardLayout : NSObject {
    BOOL _hasBackground;
}

@property (readonly, nonatomic) SKUICardViewElement *cardViewElement;
@property (readonly, nonatomic) SKUIViewElementLayoutContext *layoutContext;
@property (readonly, nonatomic) double horizontalContentInset;
@property (readonly, nonatomic) long long layoutStyle;

+ (BOOL)allowsViewElement:(id)a0;
+ (id)layoutWithCardViewElement:(id)a0 context:(id)a1;

- (void).cxx_destruct;
- (id)attributedStringForButton:(id)a0;
- (id)attributedStringForLabel:(id)a0;
- (double)bottomInsetForLastViewElement:(id)a0 width:(double)a1;
- (struct CGSize { double x0; double x1; })sizeForViewElement:(id)a0 width:(double)a1;
- (double)topInsetForViewElement:(id)a0 previousViewElement:(id)a1 width:(double)a2;

@end
