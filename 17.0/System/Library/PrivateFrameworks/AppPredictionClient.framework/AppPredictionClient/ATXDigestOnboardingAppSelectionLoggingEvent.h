@class NSUUID, NSString;

@interface ATXDigestOnboardingAppSelectionLoggingEvent : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) unsigned long long avgNumBasicNotifications;
@property (readonly, nonatomic) unsigned long long avgNumMessageNotfications;
@property (readonly, nonatomic) unsigned long long avgNumTimeSensitiveNonMessageNotifications;
@property (readonly, nonatomic) unsigned long long rank;
@property (readonly, nonatomic) BOOL addedToDigest;
@property (readonly, nonatomic) BOOL wasShownInDigestOnboarding;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (void).cxx_destruct;
- (id)initWithSessionUUID:(id)a0 bundleId:(id)a1 avgNumBasicNotifications:(unsigned long long)a2 avgNumMessageNotifications:(unsigned long long)a3 avgNumTimeSensitiveNonMessageNotifications:(unsigned long long)a4 rank:(unsigned long long)a5 addedToDigest:(BOOL)a6 wasShownInDigestOnboarding:(BOOL)a7;

@end
