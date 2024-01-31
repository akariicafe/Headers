@class SKUIResponseView, NSString, SKUITextBoxView;

@interface SKUIReviewCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIViewElementView>

@property (retain, nonatomic) SKUITextBoxView *descriptionView;
@property (retain, nonatomic) SKUIResponseView *responseView;
@property (copy, nonatomic) id /* block */ descriptionTapAction;
@property (copy, nonatomic) id /* block */ responseDescriptionTapAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_attributedStringForDateLabel:(id)a0 context:(id)a1;
+ (id)_attributedStringForTitleLabel:(id)a0 context:(id)a1;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_resetTapGestures;
- (void)contentViewTapped:(id)a0;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;

@end
