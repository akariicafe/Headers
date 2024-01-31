@class NSString, TRIFBCloudKitTreatmentRecordAsset, NSData, TRIFBCloudKitAssetRecordAsset, AFBBufRef;

@interface TRIFBTrialManagedAsset : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef *_br;
    const struct TrialManagedAsset { unsigned char x0[1]; } *_ptr;
}

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) const char *pathAsCString;
@property (readonly, nonatomic) NSData *pathAsData;
@property (readonly, nonatomic) BOOL hasFileType;
@property (readonly, nonatomic) unsigned char fileType;
@property (readonly, nonatomic) NSString *assetId;
@property (readonly, nonatomic) const char *assetIdAsCString;
@property (readonly, nonatomic) NSData *assetIdAsData;
@property (readonly, nonatomic) unsigned char cloudKitMetadataType;
@property (readonly, nonatomic) TRIFBCloudKitTreatmentRecordAsset *cloudKitMetadataAsTreatment;
@property (readonly, nonatomic) TRIFBCloudKitAssetRecordAsset *cloudKitMetadataAsAsset;
@property (readonly, nonatomic) BOOL hasIsOnDemand;
@property (readonly, nonatomic) BOOL isOnDemand;
@property (readonly, nonatomic) BOOL hasDownloadSize;
@property (readonly, nonatomic) unsigned long long downloadSize;
@property (readonly, nonatomic) NSString *assetName;
@property (readonly, nonatomic) const char *assetNameAsCString;
@property (readonly, nonatomic) NSData *assetNameAsData;
@property (readonly, nonatomic) BOOL hasHasOnDemandFlag;
@property (readonly, nonatomic) BOOL hasOnDemandFlag;

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
- (id)initWithBufRef:(id)a0 cppPointer:(const struct TrialManagedAsset { unsigned char x0[1]; } *)a1;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;
- (BOOL)verifyUTF8Fields;

@end
