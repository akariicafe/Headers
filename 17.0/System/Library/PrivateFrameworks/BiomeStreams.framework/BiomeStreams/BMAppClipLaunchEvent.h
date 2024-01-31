@class NSString, NSURL;

@interface BMAppClipLaunchEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, copy, nonatomic) NSString *URLHash;
@property (readonly, copy, nonatomic) NSString *clipBundleID;
@property (readonly, copy, nonatomic) NSString *appBundleID;
@property (readonly, copy, nonatomic) NSString *webAppBundleID;
@property (readonly, copy, nonatomic) NSString *launchReason;
@property (readonly, copy, nonatomic) NSURL *fullURL;
@property (readonly, copy, nonatomic) NSURL *referrerURL;
@property (readonly, copy, nonatomic) NSString *referrerBundleID;
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
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithURLHash:(id)a0 clipBundleID:(id)a1 appBundleID:(id)a2 webAppBundleID:(id)a3 launchReason:(id)a4 fullURL:(id)a5 referrerURL:(id)a6 referrerBundleID:(id)a7;

@end
