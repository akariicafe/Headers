@class SUUITextBoxView, SUUIRedeemITunesPassLockup, UIImage, NSString, UIImageView, UIButton, NSOperationQueue, SUUIGiftItemView, SUUIItemStateCenter, SUUITextLayout, SUUIRedeemResultMessageView;

@interface SUUIRedeemNativeResultsViewController : SUUIRedeemResultsViewController <SUUIItemStateCenterObserver, SUUIRedeemResultsViewDelegate>

@property (retain, nonatomic) UIButton *anotherButton;
@property (retain, nonatomic) SUUITextLayout *extendedMessageTextLayout;
@property (retain, nonatomic) SUUITextBoxView *extendedMessageView;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UIImage *itemImage;
@property (retain, nonatomic) SUUIItemStateCenter *itemStateCenter;
@property (retain, nonatomic) SUUIGiftItemView *itemView;
@property (retain, nonatomic) SUUIRedeemResultMessageView *messageView;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) SUUIRedeemITunesPassLockup *passbookLockup;
@property (nonatomic) unsigned long long currentItemStateFlag;
@property (nonatomic) BOOL extendedMessageIsExpanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowResultsForRedeem:(id)a0;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)loadView;
- (void).cxx_destruct;
- (void)_reloadSections;
- (id)_item;
- (id)_emptySection;
- (id)_itemView;
- (double)_tableWidth;
- (id)initWithRedeem:(id)a0;
- (id)_anotherButtonSection;
- (void)_extendedMessageAction:(id)a0;
- (id)_extendedMessageViewSection;
- (id)_headerImageViewSection;
- (id)_itemViewSection;
- (id)_linksSection;
- (id)_messageViewSection;
- (void)_openAction:(id)a0;
- (id)_passbookLearnMoreSection;
- (void)_passbookLockupAction:(id)a0;
- (void)_redeemAnotherAction:(id)a0;
- (void)_reloadResultViewMessage;
- (id)_resultImageViewSection;
- (void)_setHeaderImage:(id)a0;
- (void)_setItemImage:(id)a0;
- (void)itemStateCenter:(id)a0 itemStatesChanged:(id)a1;
- (void)redeemResultsView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
