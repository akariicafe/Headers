@class NSString, NSData;

@interface BMDiscoverabilityUsage : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *contentIdentifier;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) int contentType;
@property (readonly, nonatomic) NSString *context;
@property (readonly, nonatomic) NSData *eligibleContext;
@property (readonly, nonatomic) int ineligibleReason;
@property (readonly, nonatomic) NSString *osBuild;
@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) NSData *analyticsEvent;
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
- (id)initWithContentIdentifier:(id)a0 bundleID:(id)a1 contentType:(int)a2 context:(id)a3 eligibleContext:(id)a4 ineligibleReason:(int)a5 osBuild:(id)a6 state:(int)a7 analyticsEvent:(id)a8;

@end
