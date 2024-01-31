@class NSObject, UIImageView, UIImage, UILabel, STUsageReport, UIButton;
@protocol STRootViewModelCoordinator;

@interface STDatePickerBar : UIView

@property (readonly) UILabel *dateLabel;
@property (readonly) UIButton *leftArrowButton;
@property (readonly) UIButton *rightArrowButton;
@property (readonly) UIImageView *bottomBorderLine;
@property (readonly) UIImage *horizontalLineImage;
@property (retain) STUsageReport *usageReport;
@property (retain) NSObject<STRootViewModelCoordinator> *coordinator;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_leftDatePickerBarButtonTapped:(id)a0;
- (void)_configureArrowButton:(id)a0 isLeft:(BOOL)a1 isLayoutDirectionRightToLeft:(BOOL)a2;
- (void)_rightDatePickerBarButtonTapped:(id)a0;
- (void)_stDatePickerBarCommonInit;
- (void)updateWithCoordinator:(id)a0;

@end
