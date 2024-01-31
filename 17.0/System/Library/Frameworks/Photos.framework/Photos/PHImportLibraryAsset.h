@interface PHImportLibraryAsset : PHImportAsset {
    BOOL _isPenultimate;
}

+ (BOOL)isValidAsSidecar:(id)a0;

- (BOOL)canDelete;
- (id)nameKey;
- (BOOL)canReference;
- (void)configureSidecarTypeForExtension:(id)a0;
- (id)initWithSource:(id)a0 url:(id)a1 type:(id)a2 supportedMediaType:(unsigned char)a3 uuid:(id)a4;
- (BOOL)isBase;
- (BOOL)isRender;
- (BOOL)isSidecar;
- (id)makeImportIdentifier;
- (BOOL)shouldPreserveUUID;

@end
