@class SUUIViewElementText;

@interface SUUIStarRatingViewElement : SUUIViewElement {
    BOOL _enabled;
}

@property (readonly, nonatomic) long long starType;
@property (readonly, nonatomic) float ratingValue;
@property (readonly, nonatomic) SUUIViewElementText *text;

- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
