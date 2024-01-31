@class NSString, NSDate;

@interface BMFamilyScreenTimeRequest : BMEventBase <BMStoreData> {
    BOOL _hasRaw_eventTime;
    double _raw_eventTime;
}

@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) NSDate *eventTime;
@property (readonly, nonatomic) NSString *requesterDSID;
@property (readonly, nonatomic) NSString *responderDSID;
@property (readonly, nonatomic) int requestKind;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) int approvalTime;
@property (readonly, nonatomic) NSString *websitePath;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL isActionUserDevice;
@property (nonatomic) BOOL hasIsActionUserDevice;
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
- (id)initWithRequestID:(id)a0 eventTime:(id)a1 requesterDSID:(id)a2 responderDSID:(id)a3 requestKind:(int)a4 status:(int)a5 approvalTime:(int)a6 websitePath:(id)a7 bundleID:(id)a8 isActionUserDevice:(id)a9;

@end
