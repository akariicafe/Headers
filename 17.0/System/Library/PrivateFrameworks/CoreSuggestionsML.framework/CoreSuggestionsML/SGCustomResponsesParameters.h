@interface SGCustomResponsesParameters : NSObject

@property (readonly, nonatomic) BOOL isCustomResponsesEnabled;
@property (readonly, nonatomic) unsigned long long filterBatchSize;
@property (readonly, nonatomic) double minimumTimeIntervalSecs;
@property (readonly, nonatomic) unsigned long long minimumDistinctRecipients;
@property (readonly, nonatomic) unsigned long long minimumReplyOccurences;
@property (readonly, nonatomic) double timeDecayFactor;
@property (readonly, nonatomic) double countExponent;
@property (readonly, nonatomic) double distanceThreshold;
@property (readonly, nonatomic) double minDecayedCountForPruning;
@property (readonly, nonatomic) double minDecayedCountForPrediction;
@property (readonly, nonatomic) unsigned long long maxStoredMessages;
@property (readonly, nonatomic) unsigned long long maxStoredCustomResponses;
@property (readonly, nonatomic) unsigned long long maxRowsInPerRecipientTable;
@property (readonly, nonatomic) unsigned long long knowledgeStoreQueryLimit;
@property (readonly, nonatomic) unsigned long long maxReplyLength;
@property (readonly, nonatomic) double maxReplyGapSecs;
@property (readonly, nonatomic) double usageSpreadExponent;
@property (readonly, nonatomic) BOOL allowProfanity;
@property (readonly, nonatomic) unsigned long long compatibilityVersion;
@property (readonly, nonatomic) BOOL useNonNegativeClassesOnly;

- (id)initWithDictionary:(id)a0;

@end
