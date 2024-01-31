@class NSNumber, EDAMClientSyncRateConfig;

@interface EDAMSyncState : FATObject

@property (retain, nonatomic) NSNumber *currentTime;
@property (retain, nonatomic) NSNumber *fullSyncBefore;
@property (retain, nonatomic) NSNumber *updateCount;
@property (retain, nonatomic) NSNumber *uploaded;
@property (retain, nonatomic) NSNumber *userLastUpdated;
@property (retain, nonatomic) NSNumber *userMaxMessageEventId;
@property (retain, nonatomic) NSNumber *businessSummaryUpdated;
@property (retain, nonatomic) NSNumber *communicationEngineUpdateId;
@property (retain, nonatomic) NSNumber *currentDevicesUsed;
@property (retain, nonatomic) NSNumber *showChoiceScreen;
@property (retain, nonatomic) EDAMClientSyncRateConfig *clientSyncRateConfig;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
