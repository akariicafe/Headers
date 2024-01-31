@class NSString, NSArray;

@interface HRElectrocardiogramResultViewItem : NSObject

@property (readonly, copy, nonatomic) NSString *badge;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *numberedTitle;
@property (readonly, copy, nonatomic) NSString *visibleBodyText;
@property (readonly, copy, nonatomic) NSString *videoPath;
@property (readonly, nonatomic) NSArray *expandedContentItems;

+ (id)_makeItemForAtrialFibrillationAlgorithmVersionOne;
+ (id)_makeItemForAtrialFibrillationAlgorithmVersionTwoUpgradingFromAlgorithmVersion:(long long)a0;
+ (id)_makeItemForHighOrLowAbove120Below50AlgorithmVersionOne;
+ (id)_makeItemForHighOrLowAbove150Below50AlgorithmVersionTwoUpgradingFromAlgorithmVersion:(long long)a0;
+ (id)_makeItemForInconclusiveAlgorithmVersionOneWithLearnMoreDelegate:(id)a0;
+ (id)_makeItemForInconclusiveAlgorithmVersionTwoUpgradingFromAlgorithmVersion:(long long)a0 withLearnMoreDelegate:(id)a1;
+ (id)_makeItemForPoorRecordingAlgorithmVersionTwoUpgradingFromAlgorithmVersion:(long long)a0 withLearnMoreDelegate:(id)a1;
+ (id)_makeItemForSinusRhythmAlgorithmVersionOne;
+ (id)viewItemWithClassification:(unsigned long long)a0 sampleAlgorithmVersion:(id)a1 forAlgorithmVersion:(long long)a2 learnMoreDelegate:(id)a3;
+ (id)viewItemWithClassification:(unsigned long long)a0 sampleAlgorithmVersion:(id)a1 forAlgorithmVersion:(long long)a2 upgradingFromAlgorithmVersion:(long long)a3 learnMoreDelegate:(id)a4;

- (void).cxx_destruct;
- (id)initWithBadge:(id)a0 title:(id)a1 numberedTitle:(id)a2 visibleBodyText:(id)a3 videoPath:(id)a4 expandedContentItems:(id)a5;

@end
