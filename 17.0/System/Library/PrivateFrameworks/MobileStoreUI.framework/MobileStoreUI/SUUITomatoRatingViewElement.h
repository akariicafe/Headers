@class SUUIViewElementText;

@interface SUUITomatoRatingViewElement : SUUIViewElement

@property (readonly, nonatomic) long long freshness;
@property (readonly, nonatomic) float tomatoRating;
@property (readonly, nonatomic) SUUIViewElementText *ratingText;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
