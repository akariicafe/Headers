@class NSString, NSArray;

@interface BMPostSiriEngagementEvent : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *UISessionID;
@property (readonly, nonatomic) NSString *taskID;
@property (readonly, nonatomic) NSString *taskType;
@property (readonly, nonatomic) NSString *conversationPath;
@property (nonatomic) BOOL hasTaskSuccess;
@property (readonly, nonatomic) int taskSuccess;
@property (nonatomic) BOOL hasIsUserAbandoned;
@property (readonly, nonatomic) BOOL isUserAbandoned;
@property (nonatomic) BOOL hasIsUserCancelled;
@property (readonly, nonatomic) BOOL isUserCancelled;
@property (readonly, nonatomic) NSArray *pseEvents;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)serialize;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithUISessionID:(id)a0 taskID:(id)a1 taskType:(id)a2 conversationPath:(id)a3 taskSuccess:(int)a4 isUserAbandoned:(BOOL)a5 isUserCancelled:(BOOL)a6 pseEvents:(id)a7;
- (id)initWithUISessionId:(id)a0 domain:(id)a1 action:(id)a2 isPostSiriEngagement:(BOOL)a3 pseDeltaDuration:(double)a4 pseDeltaSinceUIStart:(double)a5 pseDeltaSinceUIEnd:(double)a6 pseContents:(id)a7;

@end
