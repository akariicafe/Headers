@class NSMutableArray, NSMapTable, NSString, NSNumber, UIButton;
@protocol SUUIOfferViewDelegate;

@interface SUUIOfferView : SUUIViewReuseView <SUUIItemOfferButtonDelegate, SUUIViewElementView>

@property (nonatomic, getter=isShowingConfirmation) BOOL showingConfirmation;
@property (nonatomic, getter=isCompactModeEnabled) BOOL compactModeEnabled;
@property (nonatomic) unsigned long long alignment;
@property (retain, nonatomic) NSMapTable *buttonElements;
@property (retain, nonatomic) NSMapTable *buyButtonDescriptorToButton;
@property (retain, nonatomic) NSMapTable *notices;
@property (retain, nonatomic) UIButton *hlsPlayButton;
@property (retain, nonatomic) NSNumber *hlsID;
@property (retain, nonatomic) NSMutableArray *metadataViews;
@property (retain, nonatomic) NSMutableArray *offerButtonViews;
@property (weak, nonatomic) id<SUUIOfferViewDelegate> delegate;
@property (nonatomic) long long metadataPosition;
@property (readonly, nonatomic) NSString *offerViewStateDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_attributedStringForButton:(id)a0 context:(id)a1;
+ (id)_attributedStringForLabel:(id)a0 context:(id)a1;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;

- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_buttonAction:(id)a0;
- (void)_cancelConfirmationAction:(id)a0;
- (void)_sendWillAnimate;
- (BOOL)_shouldHideNoticesWithBuyButtonDescriptor:(id)a0 context:(id)a1;
- (void)_showConfirmationAction:(id)a0;
- (void)itemOfferButtonDidAnimateTransition:(id)a0;
- (void)itemOfferButtonWillAnimateTransition:(id)a0;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;

@end
