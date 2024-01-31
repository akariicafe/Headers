@class NSString, UIButton, HKCurrentTimeChevronButton;
@protocol HKCurrentTimeViewDelegate;

@interface HKCurrentTimeView : UIView {
    UIButton *_currentTimeButton;
    HKCurrentTimeChevronButton *_previousTimeIndexButton;
    HKCurrentTimeChevronButton *_nextTimeIndexButton;
}

@property (copy, nonatomic) NSString *currentTimeString;
@property (weak, nonatomic) id<HKCurrentTimeViewDelegate> delegate;
@property (nonatomic) BOOL disableControls;
@property (nonatomic) BOOL previousTimeButtonEnabled;
@property (nonatomic) BOOL nextTimeButtonEnabled;
@property (nonatomic) BOOL currentTimeButtonEnabled;
@property (nonatomic) BOOL omitPrevNextButtons;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (double)_currentTimeButtonBaselineToTop;
- (double)_backgroundAlpha:(BOOL)a0;
- (id)_backgroundColor:(BOOL)a0;
- (id)_colorIfForeground:(BOOL)a0 enabled:(BOOL)a1;
- (double)_currentTimeButtonBaselineToBottom;
- (id)_currentTimeButtonFont;
- (double)_foregroundAlpha:(BOOL)a0;
- (id)_foregroundColor:(BOOL)a0;
- (void)_handleContentSizeCategoryDidChange;
- (id)_labelColor:(BOOL)a0;
- (id)_tintColor:(BOOL)a0;
- (void)currentTimeButtonTapped:(id)a0;
- (id)initWithWideHorizontalMargin:(BOOL)a0;
- (void)nextTimeIndexButtonTapped:(id)a0;
- (void)previousTimeIndexButtonTapped:(id)a0;
- (void)setupViewWithWideHorizontalMargin:(BOOL)a0;

@end
