@class NSString, HRExpandedContentItemLearnMore;

@interface HRExpandedContentItem : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) HRExpandedContentItemLearnMore *learnMore;

+ (id)_atrialFibrillationExpandedContentItemsAlgVersionOne;
+ (id)_atrialFibrillationExpandedContentItemsAlgorithmVersionTwo;
+ (id)_highOrLowAbove120Below50HeartRateExpandedContentItemsAlgVersionOne;
+ (id)_highOrLowAbove150Below50HeartRateExpandedContentItemsAlgorithmVersionTwoUpgradingFromAlgorithmVersion:(long long)a0;
+ (id)_inconclusiveExpandedContentItemsAlgVersionOneWithLearnMoreDelegate:(id)a0;
+ (id)_inconclusiveExpandedContentItemsAlgorithmVersionTwoUpgradingFromAlgorithmVersion:(long long)a0 withLearnMoreDelegate:(id)a1;
+ (id)_poorRecordingExpandedContentItemsForAlgorithmVersionTwoWithLearnMoreDelegate:(id)a0;
+ (id)_sinusRhythmExpandedContentItemsAlgVersionOne;
+ (id)atrialFibrillationItemsForAlgorithmVersion:(long long)a0;
+ (id)highOrLowAbove120Below50HeartRateItemsForAlgorithmVersion:(long long)a0;
+ (id)highOrLowAbove150Below50HeartRateItemsForAlgorithmVersion:(long long)a0 upgradingFromAlgorithmVersion:(long long)a1;
+ (id)inconclusiveItemsForAlgorithmVersion:(long long)a0 upgradingFromAlgorithmVersion:(long long)a1 learnMoreDelegate:(id)a2;
+ (id)itemWithType:(long long)a0 title:(id)a1;
+ (id)poorRecordingItemsForAlgorithmVersion:(long long)a0 learnMoreDelegate:(id)a1;
+ (id)sinusRhythmItemsForAlgorithmVersion:(long long)a0;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 title:(id)a1;

@end
