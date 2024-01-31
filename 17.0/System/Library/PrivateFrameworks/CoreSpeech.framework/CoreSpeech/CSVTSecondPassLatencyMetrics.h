@interface CSVTSecondPassLatencyMetrics : NSObject

@property (nonatomic) unsigned long long secondPassAssetQueryStartTime;
@property (nonatomic) unsigned long long secondPassAssetQueryCompleteTime;
@property (nonatomic) unsigned long long secondPassAssetLoadStartTime;
@property (nonatomic) unsigned long long secondPassAssetLoadCompleteTime;
@property (nonatomic) unsigned long long secondPassAudioStreamStartTime;
@property (nonatomic) unsigned long long secondPassAudioStreamReadyTime;
@property (nonatomic) unsigned long long secondPassFirstAudioPacketReceptionTime;
@property (nonatomic) unsigned long long secondPassLastAudioPacketReceptionTime;
@property (nonatomic) unsigned long long secondPassCheckerModelKeywordDetectionStartTime;
@property (nonatomic) unsigned long long secondPassCheckerModelKeywordDetectionEndTime;

@end
