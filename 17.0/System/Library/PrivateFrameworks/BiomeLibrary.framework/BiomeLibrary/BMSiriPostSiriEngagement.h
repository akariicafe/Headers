@class NSString, NSArray, BMSiriPostSiriEngagementFeatures;

@interface BMSiriPostSiriEngagement : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *UISessionID;
@property (readonly, nonatomic) NSString *taskID;
@property (readonly, nonatomic) NSString *taskType;
@property (readonly, nonatomic) NSString *conversationPath;
@property (readonly, nonatomic) NSString *appPattern;
@property (readonly, nonatomic) NSArray *requestIds;
@property (readonly, nonatomic) BMSiriPostSiriEngagementFeatures *engagementUnderstandingFeatures;
@property (readonly, nonatomic) NSArray *pseEvents;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_pseEventsJSONArray;
- (id)_requestIdsJSONArray;
- (id)initWithUISessionID:(id)a0 taskID:(id)a1 taskType:(id)a2 conversationPath:(id)a3 appPattern:(id)a4 requestIds:(id)a5 engagementUnderstandingFeatures:(id)a6 pseEvents:(id)a7;

@end
