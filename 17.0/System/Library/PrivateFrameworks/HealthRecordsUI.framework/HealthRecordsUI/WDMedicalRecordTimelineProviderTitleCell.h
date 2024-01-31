@class UILabel, NSString;

@interface WDMedicalRecordTimelineProviderTitleCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)setupSubviews;

@end
