@class NSString, BMPruningPolicy;

@interface BMStoreConfig : NSObject <NSCopying> {
    NSString *_streamIdentifierForLogging;
    NSString *_datastorePath;
    unsigned long long _streamType;
}

@property (readonly, nonatomic) unsigned long long configDatastoreVersion;
@property (nonatomic) long long storeLocationOption;
@property (copy, nonatomic) NSString *remoteStreamName;
@property (readonly, nonatomic) BOOL isManaged;
@property (readonly, nonatomic) unsigned long long domain;
@property (readonly, nonatomic) unsigned int uid;
@property (retain, nonatomic) BMPruningPolicy *pruningPolicy;
@property (readonly, nonatomic) NSString *datastorePath;
@property (readonly, nonatomic) unsigned long long segmentSize;
@property (readonly, nonatomic) unsigned long long protectionClass;

+ (id)new;
+ (id)newPrivateStreamDefaultConfigurationWithStoreBasePath:(id)a0;
+ (id)newRestrictedStreamDefaultConfiguration;
+ (id)newRestrictedStreamDefaultConfigurationWithProtectionClass:(unsigned long long)a0;
+ (id)newRestrictedStreamWithSegmentSize:(unsigned long long)a0;
+ (id)newRestrictedStreamWithSegmentSize:(unsigned long long)a0 protectionClass:(unsigned long long)a1;
+ (id)newRestrictedStreamWithSegmentSize:(unsigned long long)a0 protectionClass:(unsigned long long)a1 domain:(unsigned long long)a2;
+ (unsigned long long)streamTypeFromStorePath:(id)a0;
+ (id)newPrivateStreamDefaultConfigurationWithStoreBasePath:(id)a0 protectionClass:(unsigned long long)a1;
+ (int)defaultStoreVersion;
+ (id)newLibraryStoreConfigForStreamIdentifier:(id)a0 domain:(unsigned long long)a1 segmentSize:(unsigned long long)a2 protectionClass:(unsigned long long)a3 pruningPolicy:(id)a4;
+ (id)newPrivateStreamDefaultConfigurationWithProtectionClass:(unsigned long long)a0 segmentSize:(unsigned long long)a1;
+ (id)newPublicStreamDefaultConfiguration;
+ (id)newPublicStreamDefaultConfigurationWithProtectionClass:(unsigned long long)a0;
+ (id)newSharedSyncRestrictedStreamWithCurrentAccountSegmentSize:(unsigned long long)a0 protectionClass:(unsigned long long)a1 domain:(unsigned long long)a2;
+ (id)newSharedSyncRestrictedStreamWithUserIdentifier:(id)a0 segmentSize:(unsigned long long)a1 protectionClass:(unsigned long long)a2 domain:(unsigned long long)a3;
+ (id)newStreamDefaultConfigurationForPublicStream:(BOOL)a0;
+ (id)newStreamDefaultConfigurationForPublicStream:(BOOL)a0 protectionClass:(unsigned long long)a1;
+ (id)newStreamDefaultConfigurationForPublicStream:(BOOL)a0 protectionClass:(unsigned long long)a1 segmentSize:(unsigned long long)a2;

- (id)init;
- (unsigned long long)hash;
- (id)copyStoreConfigWithOption:(long long)a0 account:(id)a1 remoteStreamName:(id)a2;
- (unsigned long long)streamType;
- (id)initWithStoreVersion:(unsigned long long)a0 storeBasePath:(id)a1 segmentSize:(unsigned long long)a2 protectionClass:(unsigned long long)a3 storeLocationOption:(long long)a4 remoteStreamName:(id)a5 pruningPolicy:(id)a6;
- (id)initWithStoreBasePath:(id)a0 segmentSize:(unsigned long long)a1 protectionClass:(unsigned long long)a2;
- (id)description;
- (id)copyStoreConfigWithOption:(long long)a0 remoteStreamName:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithStoreVersion:(unsigned long long)a0 storeBasePath:(id)a1 segmentSize:(unsigned long long)a2 protectionClass:(unsigned long long)a3 storeLocationOption:(long long)a4 remoteStreamName:(id)a5 pruningPolicy:(id)a6 streamType:(unsigned long long)a7 domain:(unsigned long long)a8 isManaged:(BOOL)a9 streamIdentifier:(id)a10;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStoreBasePath:(id)a0 segmentSize:(unsigned long long)a1;

@end
