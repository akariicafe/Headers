@class NSArray, ICCameraFile;

@interface PHImportDeviceAsset : PHImportAsset {
    ICCameraFile *_cameraFile;
}

@property (readonly, nonatomic) NSArray *cameraFiles;

+ (id)assetFileForFile:(id)a0 source:(id)a1;
+ (void)validateCameraFile:(id)a0;

- (id)fingerprint;
- (id)creationDate;
- (BOOL)isLivePhoto;
- (BOOL)isSpatialOverCapture;
- (BOOL)canDelete;
- (id)spatialOverCaptureIdentifier;
- (void).cxx_destruct;
- (unsigned int)orientation;
- (id)livePhotoPairingIdentifier;
- (id)representedObject;
- (BOOL)isTagged;
- (id)securityScopedURL;
- (BOOL)isSloMo;
- (id)nameKey;
- (int)burstPickType;
- (id)burstUUID;
- (BOOL)canPreserveFolderStructure;
- (BOOL)canReference;
- (BOOL)containsDateKey:(id)a0;
- (void)copyToURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)createMetadataFromProperties:(id)a0;
- (id)durationTimeInterval;
- (struct CGSize { double x0; double x1; })exifPixelSize;
- (BOOL)hasAudioAttachment;
- (id)initWithSource:(id)a0 cameraFile:(id)a1 type:(id)a2 supportedMediaType:(unsigned char)a3;
- (BOOL)isBase;
- (BOOL)isRAW;
- (BOOL)isRender;
- (BOOL)isViewable;
- (void)loadMetadataAsync:(id /* block */)a0;
- (void)loadMetadataSync;
- (struct CGSize { double x0; double x1; })orientedPixelSize;
- (id)originatingAssetID;
- (id)parentFolderPath;
- (BOOL)performAdditionalLivePhotoChecksWithImageAsset:(id)a0;
- (void)thumbnailUsingRequest:(id)a0 atEnd:(id /* block */)a1;

@end
