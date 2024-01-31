@interface UIUnderstanding.UIUModelFetcher : NSObject {
    void /* unknown type, empty encoding */ log;
    void /* unknown type, empty encoding */ dispatchGroup;
    void /* unknown type, empty encoding */ dispatchQueue;
    void /* unknown type, empty encoding */ catalogDownloaded;
    void /* unknown type, empty encoding */ mindnetPortrait;
    void /* unknown type, empty encoding */ mindnetSquare;
    void /* unknown type, empty encoding */ clickabilityPortrait;
    void /* unknown type, empty encoding */ clickabilitySquare;
    void /* unknown type, empty encoding */ iconClassification;
    void /* unknown type, empty encoding */ screenSimilarity;
}

+ (id)sharedFetcher;

- (id)init;
- (void).cxx_destruct;
- (BOOL)areAssetsPresent;
- (BOOL)startAssetDownloadWithModelSet:(long long)a0 timeout:(double)a1;

@end
