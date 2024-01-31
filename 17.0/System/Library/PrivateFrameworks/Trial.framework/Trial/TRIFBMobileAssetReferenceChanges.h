@interface TRIFBMobileAssetReferenceChanges : NSObject {
    unsigned char _changeTypeType;
    unsigned int _replacementType;
    unsigned char _changeTypeSpecifier;
    unsigned int _replacementSpecifier;
    unsigned char _changeTypeVersion;
    unsigned int _replacementVersion;
    unsigned char _changeTypeFileType;
    unsigned char _replacementFileType;
    unsigned char _changeTypeIsOnDemand;
    BOOL _replacementIsOnDemand;
    unsigned char _changeTypeDownloadSize;
    unsigned long long _replacementDownloadSize;
    unsigned char _changeTypeAssetName;
    unsigned int _replacementAssetName;
}

- (void)replaceVersion:(id)a0;
- (void)preserveVersion;
- (void)omitAssetName;
- (void)omitDownloadSize;
- (void)omitFileType;
- (void)omitIsOnDemand;
- (void)preserveAssetName;
- (void)preserveDownloadSize;
- (void)preserveFileType;
- (void)preserveIsOnDemand;
- (void)preserveSpecifier;
- (void)preserveType;
- (void)replaceAssetName:(id)a0;
- (void)replaceDownloadSize:(unsigned long long)a0;
- (void)replaceFileType:(unsigned char)a0;
- (void)replaceIsOnDemand:(BOOL)a0;
- (void)replaceSpecifier:(id)a0;
- (void)replaceType:(id)a0;

@end
