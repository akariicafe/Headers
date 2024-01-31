@class PRXCardContentView, NSString, PRXAction, UIView, PRXButton, NSArray, PRXCardBottomTray, NSLayoutConstraint, UILabel, UIScrollView;

@interface PRXCardContentWrapperView : UIView <PRXCardContentViewDelegate, PRXCardBottomTrayDelegate, UIScrollViewDelegate>

@property (readonly, nonatomic) PRXCardContentView *contentView;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) UIView *bottomKeyline;
@property (readonly, nonatomic) UIView *topKeyline;
@property (readonly, nonatomic) UIView *titleContainer;
@property (readonly, nonatomic) UILabel *scrolledTitleLabel;
@property (readonly, nonatomic) NSLayoutConstraint *scrollViewBottomConstraint;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) PRXAction *infoButtonAction;
@property (readonly, nonatomic) PRXCardBottomTray *bottomTray;
@property (retain, nonatomic) PRXButton *dismissButton;
@property (copy, nonatomic) NSArray *actionButtons;
@property (readonly, copy, nonatomic) NSArray *auxiliaryViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentView:(id)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollToBottom;
- (void)didChangeContentsOfBottomTray:(id)a0;
- (void)removeBottomTray;

@end
