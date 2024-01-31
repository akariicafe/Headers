@class HKInspectableValueInRange, NSString, UIImage, HKUIMetricColors, HKMedicalRecord, NSAttributedString, WDMedicalRecordCategorySummary, HKConcept, NSNumber, UIColor;
@protocol HKClinicalBrandable;

@interface WDMedicalRecordDisplayItem : NSObject

@property (nonatomic) long long displayItemType;
@property (nonatomic) long long displayItemType;
@property (nonatomic) BOOL extraTopPadding;
@property (nonatomic) long long separatorStyle;
@property (nonatomic) BOOL separatorHidden;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } separatorInsets;
@property (nonatomic) long long placement;
@property (nonatomic) long long recordCategoryType;
@property (nonatomic) BOOL showDisclosureIndicator;
@property (nonatomic) BOOL showSelection;
@property (nonatomic) BOOL useRegularFontForSubtitle;
@property (nonatomic) BOOL showSpinner;
@property (nonatomic) double rowHeight;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSAttributedString *attributedSubtitle;
@property (retain, nonatomic) NSString *dateString;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *imageColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) HKUIMetricColors *metricColors;
@property (retain, nonatomic) HKInspectableValueInRange *chartValueWithRange;
@property (retain, nonatomic) NSString *valueString;
@property (retain, nonatomic) NSString *unitString;
@property (retain, nonatomic) HKMedicalRecord *medicalRecord;
@property (weak, nonatomic) WDMedicalRecordCategorySummary *categorySummary;
@property (retain, nonatomic) id<HKClinicalBrandable> brandableObject;
@property (retain, nonatomic) NSString *panelName;
@property (retain, nonatomic) NSString *headerString;
@property (retain, nonatomic) HKConcept *ontologyConcept;
@property (retain, nonatomic) NSNumber *recordCount;
@property (nonatomic) BOOL actionEnabled;
@property (copy, nonatomic) NSString *contextString;

+ (id)detailTitleItem;
+ (id)accountSourceItem;
+ (id)conceptCardItemWithCategoryType:(long long)a0;
+ (id)conceptHeaderItemWithCategoryType:(long long)a0 title:(id)a1;
+ (id)detailAttributedSubtitleItem;
+ (id)detailSpinnerItem;
+ (id)detailSubtitleItem;
+ (id)detailSubtitleItemWithTitle:(id)a0 subtitle:(id)a1;
+ (id)detailSubtitleItemWithTitle:(id)a0 subtitle:(id)a1 extraTopPadding:(BOOL)a2;
+ (id)detailTitleItemWithTitle:(id)a0 subtitle:(id)a1;
+ (id)recordCardItem;
+ (id)sectionHeaderItem;
+ (id)standaloneItem;
+ (id)timelineSummaryAppendixItem;
+ (id)timelineSummaryCategoryMinimizedItem;
+ (id)timelineSummaryCategoryMinimizedItemWithCategoryType:(long long)a0;
+ (id)timelineSummaryCategoryTitleItem;
+ (id)timelineSummaryCategoryTitleItemWithCategoryType:(long long)a0;
+ (id)timelineSummaryContentWithSubtitleItem;
+ (id)timelineSummaryDetailCategoryTitleItemWithMedicalRecord:(id)a0;
+ (id)timelineSummaryPanelTitleItem;
+ (id)timelineSummaryReferenceRangeItem;
+ (id)timelineSummarySourceTitleItem;
+ (id)timelineSummaryValueItem;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
