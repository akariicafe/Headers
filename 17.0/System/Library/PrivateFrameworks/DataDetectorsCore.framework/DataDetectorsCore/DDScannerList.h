@class NSString, NSMutableArray;

@interface DDScannerList : NSObject {
    BOOL _spotlightSuggestionsEnabled;
    int _type;
    NSString *_hash;
    NSString *_language;
    BOOL _languageHighConfidence;
    NSMutableArray *_waitQueue;
    NSMutableArray *_scannerCache;
    NSMutableArray *_activeScanners;
}

- (void).cxx_destruct;

@end
