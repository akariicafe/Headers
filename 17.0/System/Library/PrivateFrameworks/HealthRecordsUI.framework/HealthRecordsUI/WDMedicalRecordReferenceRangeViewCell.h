@class NSString, UILabel, HKInspectableValueInRange, HRExpandedRangeValueView;

@interface WDMedicalRecordReferenceRangeViewCell : WDMedicalRecordGroupableCell <WDAttributedSubtitleDisplayable>

@property (retain, nonatomic) HRExpandedRangeValueView *expandedRangeValueView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) HKInspectableValueInRange *valueInRange;
@property (copy, nonatomic) NSString *subtitle;

- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setAttributedSubtitleText:(id)a0;

@end
