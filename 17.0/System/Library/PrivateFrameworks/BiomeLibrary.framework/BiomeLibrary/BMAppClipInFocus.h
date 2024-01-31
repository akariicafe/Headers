@class NSString;

@interface BMAppClipInFocus : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *URLHash;
@property (readonly, nonatomic) NSString *clipBundleID;
@property (readonly, nonatomic) NSString *appBundleID;
@property (readonly, nonatomic) NSString *webAppBundleID;
@property (readonly, nonatomic) NSString *launchReason;
@property (readonly, nonatomic) NSString *fullURL;
@property (readonly, nonatomic) NSString *referrerURL;
@property (readonly, nonatomic) NSString *referrerBundleID;
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
- (id)initWithURLHash:(id)a0 clipBundleID:(id)a1 appBundleID:(id)a2 webAppBundleID:(id)a3 launchReason:(id)a4 fullURL:(id)a5 referrerURL:(id)a6 referrerBundleID:(id)a7;

@end
