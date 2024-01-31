@class NSString, NSDateInterval;

@interface BMAppLaunchEvent : BMEventBase <BMEventBinaryStepping, BMEventTimeElapsing, BMEventAppAssociating, BMStoreData, NSSecureCoding, BMProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *launchReason;
@property (nonatomic) unsigned long long launchType;
@property (nonatomic, getter=isStarting) BOOL starting;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *parentBundleID;
@property (copy, nonatomic) NSString *extensionHostID;
@property (copy, nonatomic) NSString *shortVersionString;
@property (copy, nonatomic) NSString *exactVersionString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int dataVersion;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)jsonDict;
- (id)json;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStarting:(BOOL)a0 bundleID:(id)a1 absoluteTimeStamp:(double)a2 duration:(double)a3 launchReason:(id)a4 launchType:(unsigned long long)a5 parentBundleID:(id)a6 extensionHostID:(id)a7;
- (id)initWithStarting:(BOOL)a0 bundleID:(id)a1 absoluteTimeStamp:(double)a2 duration:(double)a3 launchReason:(id)a4 launchType:(unsigned long long)a5 parentBundleID:(id)a6 extensionHostID:(id)a7 shortVersionString:(id)a8 exactBundleVersion:(id)a9;
- (id)initWithStarting:(BOOL)a0 bundleID:(id)a1 absoluteTimeStamp:(double)a2 launchReason:(id)a3 launchType:(unsigned long long)a4 parentBundleID:(id)a5 extensionHostID:(id)a6;
- (id)initWithStarting:(BOOL)a0 bundleID:(id)a1 absoluteTimeStamp:(double)a2 launchReason:(id)a3 launchType:(unsigned long long)a4 parentBundleID:(id)a5 extensionHostID:(id)a6 shortVersionString:(id)a7 exactBundleVersion:(id)a8;
- (id)initWithStarting:(BOOL)a0 bundleId:(id)a1 absoluteTimeStamp:(double)a2 launchReason:(id)a3 launchType:(unsigned long long)a4;

@end
