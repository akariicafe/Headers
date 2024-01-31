@class NSString, NSArray, UIVisualEffectView, HUIHeadphoneLevelGroup, UILabel, UIView, NSNumberFormatter;
@protocol HACCContentModuleDelegate;

@interface HUIHeadphoneLevelView : UIControl <HACCContentModule>

@property (retain, nonatomic) UIView *centerContainer;
@property (retain, nonatomic) UIVisualEffectView *titleContainer;
@property (retain, nonatomic) UIView *subtitleContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLeftLabel;
@property (retain, nonatomic) UILabel *subtitleRightLabel;
@property (retain, nonatomic) UIVisualEffectView *labelContainer;
@property (retain, nonatomic) UILabel *minLabel;
@property (retain, nonatomic) UILabel *thresholdLabel;
@property (retain, nonatomic) UILabel *maxLabel;
@property (retain, nonatomic) HUIHeadphoneLevelGroup *levelGroup;
@property (retain, nonatomic) NSNumberFormatter *dbFormatter;
@property (retain, nonatomic) NSArray *viewConstraints;
@property (nonatomic) int layoutViewSize;
@property (readonly, nonatomic) BOOL isRTL;
@property (weak, nonatomic) id<HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;
@property (nonatomic) BOOL providesOwnSeparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (id)init;
- (void)dealloc;
- (unsigned long long)accessibilityTraits;
- (BOOL)enabled;
- (void)updateConstraints;
- (id)_accessibilityUserTestingChildren;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (id)accessibilityValue;
- (void)updateValue;
- (id)contentValue;
- (id)formatLevel:(id)a0 baseFont:(id)a1;
- (id)formatLevelRating:(id)a0 threshold:(unsigned long long)a1;
- (void)updateViewsWithSlowLeq:(double)a0 fastLeq:(double)a1 andThreshold:(unsigned long long)a2;

@end
