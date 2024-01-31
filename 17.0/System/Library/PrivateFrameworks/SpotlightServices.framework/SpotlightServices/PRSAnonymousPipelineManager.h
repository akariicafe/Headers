@class NSString, NSArray, NSObject, NSUserDefaults;
@protocol OS_dispatch_source, OS_dispatch_queue, SPCustomFeedbackSender;

@interface PRSAnonymousPipelineManager : NSObject

@property (retain) NSUserDefaults *userDefaults;
@property BOOL isInternalDevice;
@property (retain, nonatomic) NSString *lastTopHitQueryString;
@property (retain, nonatomic) NSArray *lastTopHitQueryItems;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *topHitDataCollectionTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL submissionEnabled;
@property (retain, nonatomic) id<SPCustomFeedbackSender> delegate;

+ (id)sharedManager;
+ (id)dateFormatter;
+ (id)submitttedSpotlightReportsError:(id *)a0;
+ (BOOL)_dataCollectionAllowedForBundle:(id)a0;
+ (id)allowedBundles;
+ (id)candidateLogsBasePath;
+ (id)candidateLogsURLForBundle:(id)a0;
+ (id)dateFromFileURL:(id)a0;
+ (id)engagementCountKeyForBundle:(id)a0;
+ (id)logURLForCurrentTimeAndBundle:(id)a0;
+ (id)relativePositionKey;
+ (id)submittedLogsURL;
+ (id)submittedLogsURLForUser:(id)a0;

- (id)init;
- (void)setFeedbackDelegate:(id)a0;
- (void)queryWillFinishWithItems:(id)a0 forClient:(id)a1 forQuery:(id)a2 anonymousDataCollectionAllowed:(BOOL)a3;
- (void)registerXPCActivity;
- (BOOL)dateIsExpired:(id)a0;
- (void)_addQueryInfoToJSONWriter:(struct json_writer { } *)a0 withQuery:(id)a1 cepData:(id)a2 forClient:(id)a3 debugInfoAllowed:(BOOL)a4 keyboardPrimaryLanguage:(id)a5;
- (void)extractTrainingDataWithItemAtIndex:(unsigned long long)a0 withItems:(id)a1 forQuery:(id)a2 dataCollectAllowed:(BOOL)a3 forClientBundle:(id)a4 keyboardPrimaryLanguage:(id)a5 clientID:(id)a6;
- (void)sendMLFeedbackActivity:(id)a0 clientID:(id)a1;
- (id)retrieveFeedbackURLToSendInDirectory:(id)a0;
- (void)deleteExpiredSubmittedLogs;
- (void)extractTrainingDataWithItemAtIndex:(unsigned long long)a0 withItems:(id)a1 forQuery:(id)a2 dataCollectAllowed:(BOOL)a3 queryID:(id)a4 withCEPData:(id)a5 forClientBundle:(id)a6 debugInfoEnabled:(BOOL)a7 keyboardPrimaryLanguage:(id)a8 clientID:(id)a9;
- (void)_increaseUserDefaultsEngagementCountForBundle:(id)a0;
- (void)_updateUserDefaultsWithEngagedBundle:(id)a0 andQueryID:(id)a1 forClientBundle:(id)a2;
- (void).cxx_destruct;
- (void)_writeResult:(struct json_writer { } *)a0 item:(id)a1;
- (void)cleanUp;
- (id)_relativePositionForItem:(id)a0 inItems:(id)a1 withIndexOfEngagedItem:(long long)a2 forClientBundle:(id)a3;
- (void)deleteCandidateLogs;
- (void)_extractTrainingSamplesForQuery:(id)a0 withIndexOfEngagedItem:(unsigned long long)a1 withItems:(id)a2 withCEPData:(id)a3 forClientBundle:(id)a4 debugInfoEnabled:(BOOL)a5 keyboardPrimaryLanguage:(id)a6;
- (void)_addRelativePositionToFeatureDict:(id)a0 relativePosition:(id)a1 forItem:(id)a2 debugInfoEnabled:(BOOL)a3;
- (BOOL)_shouldDataCollectWithEngagedBundle:(id)a0 withQueryId:(id)a1 forClientBundle:(id)a2;
- (void)userEngagedItemWithIdentifier:(id)a0 forBundle:(id)a1 forQuery:(id)a2;
- (id)_abandonedItemsFromItems:(id)a0 withIndexOfEngagedItem:(unsigned long long)a1;

@end
