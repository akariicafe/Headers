@class NSString;

@interface BMScreenTimeRequestEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) int kind;
@property (nonatomic) int status;
@property (nonatomic) double eventTime;
@property (nonatomic) int approvalTime;
@property (copy, nonatomic) NSString *requesterDSID;
@property (copy, nonatomic) NSString *responderDSID;
@property (copy, nonatomic) NSString *websitePath;
@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL isActionUserDevice;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)init;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (id)jsonDict;
- (id)json;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithRequestID:(id)a0 kind:(int)a1 status:(int)a2 eventTime:(double)a3 approvalTime:(int)a4 requesterDSID:(id)a5 responderDSID:(id)a6 websitePath:(id)a7 bundleID:(id)a8;
- (id)initWithRequestID:(id)a0 kind:(int)a1 status:(int)a2 eventTime:(double)a3 approvalTime:(int)a4 requesterDSID:(id)a5 responderDSID:(id)a6 websitePath:(id)a7 bundleID:(id)a8 isActionUserDevice:(BOOL)a9;
- (BOOL)validNonOptionalProperty:(id)a0 propertyName:(id)a1;

@end
