@class NSUUID, PBRequest, NSString, NSDate, NSData, NSDictionary;
@protocol DRSDecisionServerBatchRequest;

@interface DRSEnableDataGatheringQuery : NSObject <DRSDSRequestObject>

@property (readonly, nonatomic) NSUUID *uniqueID;
@property (readonly, nonatomic) PBRequest *pbRequest;
@property (readonly, nonatomic) id<DRSDecisionServerBatchRequest> pbBatchInstance;
@property (readonly, nonatomic) Class pbBatchResponseClass;
@property (readonly, nonatomic) NSString *functionName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSString *issueCategory;
@property (readonly, nonatomic) NSString *logType;
@property (readonly, nonatomic) NSString *build;
@property (readonly, nonatomic) NSDate *queryDate;
@property (readonly, nonatomic) NSUUID *queryID;
@property (nonatomic) unsigned char response;
@property (readonly, nonatomic) NSString *responseString;
@property (readonly, nonatomic) NSData *contextDictionaryData;
@property (readonly, nonatomic) NSDictionary *contextDictionary;
@property (readonly, nonatomic) unsigned short attemptCount;
@property (retain, nonatomic) NSString *rejectionReason;
@property (nonatomic) BOOL isContinue;

+ (id)entityName;
+ (id)mostRecentDateFirstSortDescriptor;
+ (id)leastRecentDateFirstSortDescriptor;
+ (id)_ON_MOC_QUEUE_enableDataGatheringQueriesForFilterPredicate:(id)a0 context:(id)a1 sortDescriptors:(id)a2 fetchLimit:(unsigned long long)a3 errorOut:(id *)a4;
+ (id)_ON_MOC_QUEUE_enableDataGatheringQueryForID:(id)a0 context:(id)a1;
+ (id)cachedQueryResponseForQuery:(id)a0 inContext:(id)a1 errorOut:(id *)a2;
+ (id)enableDataGatheringQueriesForFilterPredicate:(id)a0 context:(id)a1 sortDescriptors:(id)a2 fetchLimit:(unsigned long long)a3 errorOut:(id *)a4;
+ (id)enableDataGatheringQueryForID:(id)a0 context:(id)a1;

- (id)initWithXPCDict:(id)a0;
- (id)protobufRepresentation;
- (id)_initWithMO_ON_MOC_QUEUE:(id)a0;
- (void).cxx_destruct;
- (BOOL)doesMatchCachedQuery:(id)a0;
- (BOOL)isEqualToDataGatheringQuery:(id)a0;
- (id)jsonCompatibleDictionaryRepresentation;
- (void)queryFinishedWithDecision:(id)a0 error:(id)a1;
- (BOOL)submitQuery;
- (void)updateContextWithDataGatheringQuery_ON_MOC_QUEUE:(id)a0;

@end
