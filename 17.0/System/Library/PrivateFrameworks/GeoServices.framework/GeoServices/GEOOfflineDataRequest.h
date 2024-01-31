@class NSURL, GEOOfflineDataBatchKey;

@interface GEOOfflineDataRequest : NSObject {
    GEOOfflineDataBatchKey *_key;
    NSURL *_url;
    unsigned long long _expectedSizeInBytes;
    unsigned long long _version;
}

- (void).cxx_destruct;

@end
