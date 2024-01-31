@class UILabel, UIButton, UIView;
@protocol SBIconWidgetIntroductionDelegate;

@interface SBIconWidgetIntroductionPopoverView : SBHPopoverView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIButton *editButton;
@property (retain, nonatomic) UIButton *okButton;
@property (retain, nonatomic) UIView *verticalDividerLine;
@property (weak, nonatomic) id<SBIconWidgetIntroductionDelegate> delegate;

+ (struct CGSize { double x0; double x1; })contentSize:(BOOL)a0;

- (void).cxx_destruct;
- (void)_editButtonTapped:(id)a0;
- (void)_okButtonTapped:(id)a0;
- (void)_setUpViews:(BOOL)a0;
- (void)_updateForUserInterfaceStyle;
- (id)initWithDelegate:(id)a0 vertical:(BOOL)a1;

@end
