@interface TRIFBTrialManagedAssetChanges : NSObject {
    unsigned char _changeTypePath;
    unsigned int _replacementPath;
    unsigned char _changeTypeFileType;
    unsigned char _replacementFileType;
    unsigned char _changeTypeAssetId;
    unsigned int _replacementAssetId;
    unsigned char _replacementCloudKitMetadataType;
    unsigned char _changeTypeCloudKitMetadata;
    unsigned int _replacementCloudKitMetadata;
    unsigned char _changeTypeIsOnDemand;
    BOOL _replacementIsOnDemand;
    unsigned char _changeTypeDownloadSize;
    unsigned long long _replacementDownloadSize;
    unsigned char _changeTypeAssetName;
    unsigned int _replacementAssetName;
    unsigned char _changeTypeHasOnDemandFlag;
    BOOL _replacementHasOnDemandFlag;
}

- (void)preserveAssetId;
- (void)replaceAssetId:(id)a0;
- (void)omitAssetName;
- (void)omitDownloadSize;
- (void)omitFileType;
- (void)omitHasOnDemandFlag;
- (void)omitIsOnDemand;
- (void)omitPath;
- (void)preserveAssetName;
- (void)preserveCloudKitMetadata;
- (void)preserveDownloadSize;
- (void)preserveFileType;
- (void)preserveHasOnDemandFlag;
- (void)preserveIsOnDemand;
- (void)preservePath;
- (void)replaceAssetName:(id)a0;
- (void)replaceCloudKitMetadataWithAsset:(id)a0;
- (void)replaceCloudKitMetadataWithTreatment:(id)a0;
- (void)replaceDownloadSize:(unsigned long long)a0;
- (void)replaceFileType:(unsigned char)a0;
- (void)replaceHasOnDemandFlag:(BOOL)a0;
- (void)replaceIsOnDemand:(BOOL)a0;
- (void)replacePath:(id)a0;

@end
