@class SUUICellImageView, NSString, SUUIItemState, UIImage, UIView, SUUIItemOffer, SUUIItemOfferButton, SUUIItemOfferButtonAppearance, UILabel;

@interface SUUIItemCellLayout : SUUICellLayout <SUUIItemOfferButtonDelegate> {
    BOOL _hidesItemOfferButton;
}

@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic, getter=isIconImageHidden) BOOL iconImageHidden;
@property (nonatomic) BOOL displaysItemOfferButton;
@property (nonatomic, getter=isRestricted) BOOL restricted;
@property (retain, nonatomic) SUUIItemOffer *itemOffer;
@property (retain, nonatomic) SUUIItemOfferButtonAppearance *itemOfferButtonAppearance;
@property (copy, nonatomic) NSString *itemOfferNoticeString;
@property (copy, nonatomic) SUUIItemState *itemState;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) SUUICellImageView *iconImageView;
@property (readonly, nonatomic) SUUIItemOfferButton *itemOfferButton;
@property (readonly, nonatomic) UILabel *itemOfferNoticeLabel;
@property (readonly, nonatomic) UIView *removeControlView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBackgroundColor:(id)a0;
- (void)dealloc;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)resetLayout;
- (BOOL)_canShowItemOfferNotice;
- (void)_cancelItemOfferConfirmationAction:(id)a0;
- (void)_getParentTableView:(id *)a0 collectionView:(id *)a1;
- (void)_itemOfferConfirmAction:(id)a0;
- (id)_parentCollectionViewCell;
- (void)_reloadItemOfferButton:(BOOL)a0;
- (void)_reloadItemOfferVisibility;
- (void)_showItemOfferConfirmationAction:(id)a0;
- (BOOL)_useCloudButtonForItemState:(id)a0;
- (void)itemOfferButtonWillAnimateTransition:(id)a0;
- (void)layoutForItemOfferChange;
- (void)setItemState:(id)a0 animated:(BOOL)a1;

@end
