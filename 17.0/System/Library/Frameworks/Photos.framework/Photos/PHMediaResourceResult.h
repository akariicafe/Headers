@class NSData, NSURL, PHAssetResource;

@interface PHMediaResourceResult : PHCompositeMediaResult {
    PHAssetResource *_assetResource;
}

@property (retain, nonatomic) NSData *assetResourceData;
@property (copy, nonatomic) NSURL *assetResourceFileURL;

- (id)videoURL;
- (id)uniformTypeIdentifier;
- (id)imageURL;
- (id)exifOrientation;
- (void).cxx_destruct;
- (BOOL)containsValidData;
- (id)allowedInfoKeys;
- (id)sanitizedInfoDictionary;
- (id)adjustmentData;
- (id)initWithRequestID:(int)a0 assetResource:(id)a1;
- (id)mediaMetadata;

@end
