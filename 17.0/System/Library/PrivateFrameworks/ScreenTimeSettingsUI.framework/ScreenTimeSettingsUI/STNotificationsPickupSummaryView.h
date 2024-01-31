@class STUsageReport, UIStackView;

@interface STNotificationsPickupSummaryView : UIView

@property (retain, nonatomic) STUsageReport *usageReport;
@property (retain, nonatomic) UIStackView *stackView;

- (void).cxx_destruct;
- (id)_attributedStringForPickUpTitle;
- (id)_attributedString:(id)a0 withFont:(id)a1;
- (id)_attributedStringForNotificationsDetailText;
- (id)_attributedStringForNotificationsTitle;
- (id)_attributedStringForPickUpDetailText;
- (id)initWithUsageReport:(id)a0;

@end
