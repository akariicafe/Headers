@class NSString, NSArray, NSDictionary;

@interface FCPuzzlesConfiguration : NSObject

@property (readonly, nonatomic) BOOL puzzlesEnabled;
@property (readonly, nonatomic) NSString *puzzleHubTagID;
@property (readonly, nonatomic) NSArray *puzzleTypes;
@property (readonly, nonatomic) long long autoEnableNotificationMinimumPlayCount;
@property (readonly, nonatomic) double autoEnableNotificationPlayTimeInterval;
@property (readonly, nonatomic) double progressUpdateTimeInterval;
@property (readonly, nonatomic) double badgingUpdateQuiesenceInterval;
@property (readonly, nonatomic) NSDictionary *difficultyDescriptions;
@property (readonly, nonatomic) long long numberOfHistoryPuzzlesToPrewarm;
@property (readonly, nonatomic) double puzzleHistoryPrewarmTimeInterval;
@property (readonly, nonatomic) double puzzlesPrewarmTimeInterval;
@property (readonly, nonatomic) double puzzlesEngineRefreshTimeInterval;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0 storefrontID:(id)a1 defaultSupportedStorefronts:(id)a2;

@end
