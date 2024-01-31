@class UITextField, NSString, NSTimer, SearchUICardCollectionViewController, SearchUIBackgroundView, SearchUILoadingView, SFCard;
@protocol SearchUICardViewDelegate, SearchUICommandDelegate, SFFeedbackListener;

@interface SearchUICardViewController : UIViewController <SearchUISizingDelegate, SearchUIBackgroundColorProtocol, SearchUICollectionViewRestorationProtocol>

@property (retain, nonatomic) SearchUIBackgroundView *view;
@property (retain, nonatomic) SearchUILoadingView *loadingView;
@property (retain, nonatomic) NSTimer *loadingScreenTimer;
@property (nonatomic) double initialPreviewPlatterHeight;
@property (nonatomic) BOOL hasFocusableElements;
@property (retain, nonatomic) SearchUICardCollectionViewController *tableViewController;
@property (nonatomic, getter=isInPreviewPlatter) BOOL inPreviewPlatter;
@property (nonatomic) unsigned long long level;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (retain, nonatomic) SFCard *card;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (weak, nonatomic) id<SearchUICardViewDelegate> delegate;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
@property (readonly, nonatomic) BOOL topRowWillFillBackgroundWithContent;
@property (nonatomic) BOOL threeDTouchEnabled;
@property (nonatomic) BOOL rowSelectionAppearanceEnabled;
@property (nonatomic) BOOL dragInteractionEnabled;
@property (nonatomic) BOOL scrollEnabled;
@property (weak, nonatomic) UITextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_loadAndEnrichCardSectionsFromCard:(id)a0 withCompletionHandler:(id /* block */)a1;

- (id)init;
- (void)setFooterView:(id)a0;
- (void)setRestorationContext:(id)a0;
- (void)scrollAndSelectLastSelectedIndexPath;
- (id)searchUIBackgroundColor;
- (id)restorationContext;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (double)contentHeightForWidth:(double)a0;
- (void)cardViewDidAppear;
- (void)contentSizeDidChange:(struct CGSize { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)displayLoadingViewAfterDelay:(double)a0;
- (BOOL)hasCustomViewControllersForCardSections;
- (id)initWithCard:(id)a0 feedbackListener:(id)a1;
- (id)initWithCard:(id)a0 style:(unsigned long long)a1 feedbackListener:(id)a2;
- (void)prepareLoadingView;
- (id)testingTableViewController;
- (void)updateTimerAndCardSections:(id)a0;
- (void)updateWithCardSections:(id)a0;

@end
