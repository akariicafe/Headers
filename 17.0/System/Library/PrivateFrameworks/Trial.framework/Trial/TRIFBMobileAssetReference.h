@class NSString, NSData, AFBBufRef;

@interface TRIFBMobileAssetReference : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef *_br;
    const struct MobileAssetReference { unsigned char x0[1]; } *_ptr;
}

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) const char *typeAsCString;
@property (readonly, nonatomic) NSData *typeAsData;
@property (readonly, nonatomic) NSString *specifier;
@property (readonly, nonatomic) const char *specifierAsCString;
@property (readonly, nonatomic) NSData *specifierAsData;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) const char *versionAsCString;
@property (readonly, nonatomic) NSData *versionAsData;
@property (readonly, nonatomic) BOOL hasFileType;
@property (readonly, nonatomic) unsigned char fileType;
@property (readonly, nonatomic) BOOL hasIsOnDemand;
@property (readonly, nonatomic) BOOL isOnDemand;
@property (readonly, nonatomic) BOOL hasDownloadSize;
@property (readonly, nonatomic) unsigned long long downloadSize;
@property (readonly, nonatomic) NSString *assetName;
@property (readonly, nonatomic) const char *assetNameAsCString;
@property (readonly, nonatomic) NSData *assetNameAsData;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initVerifiedRootObjectFromData:(id)a0;
- (id)deepCopyUsingBufferBuilder:(id)a0;
- (id)deepCopyUsingBufferBuilder:(id)a0 changes:(id)a1;
- (id)initVerifiedRootObjectFromData:(id)a0 requireUTF8:(BOOL)a1;
- (id)initVerifiedRootObjectFromData:(id)a0 requireUTF8:(BOOL)a1 maxDepth:(unsigned int)a2 maxTables:(unsigned int)a3;
- (id)initWithBufRef:(id)a0 cppPointer:(const struct MobileAssetReference { unsigned char x0[1]; } *)a1;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;
- (BOOL)verifyUTF8Fields;

@end
