@class NSString, BMPostSiriEngagementEventSignalDeltaEvent, NSArray;

@interface BMPostSiriEngagementEventSignal : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *action;
@property (nonatomic) BOOL hasIsPostSiriEngagement;
@property (readonly, nonatomic) BOOL isPostSiriEngagement;
@property (readonly, nonatomic) BMPostSiriEngagementEventSignalDeltaEvent *pseDelta;
@property (readonly, nonatomic) NSArray *pseContents;
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
- (id)initWithDomain:(id)a0 action:(id)a1 isPostSiriEngagement:(BOOL)a2 pseDelta:(id)a3 pseContents:(id)a4;
- (id)initWithDomain:(id)a0 action:(id)a1 isPostSiriEngagement:(BOOL)a2 pseDelta:(id)a3 pseContentsDictionary:(id)a4;

@end
