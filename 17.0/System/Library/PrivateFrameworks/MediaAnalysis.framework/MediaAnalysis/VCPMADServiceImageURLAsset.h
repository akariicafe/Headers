@class NSString, NSArray, NSURL, NSData;

@interface VCPMADServiceImageURLAsset : VCPMADServiceImageAsset {
    NSURL *_url;
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _pixelBuffer;
    unsigned int _orientation;
    NSString *_identifier;
    NSArray *_documentObservations;
    BOOL _hasCachedParseData;
    NSData *_cachedParseData;
}

- (id).cxx_construct;
- (id)identifier;
- (struct CGSize { double x0; double x1; })resolution;
- (void).cxx_destruct;
- (unsigned int)orientation;
- (unsigned long long)assetType;
- (id)cachedParseData;
- (id)documentObservations;
- (BOOL)hasCachedParseData;
- (id)initWithURL:(id)a0 identifier:(id)a1 clientBundleID:(id)a2 clientTeamID:(id)a3;
- (BOOL)isHighResDecoded;
- (int)loadPixelBuffer:(struct __CVBuffer **)a0 orientation:(unsigned int *)a1;
- (void)setCachedParseData:(id)a0 overwriteExisting:(BOOL)a1;
- (void)setDocumentObservations:(id)a0;

@end
