@class MFLock;

@interface MFWebKitMainThread : NSObject {
    struct __CFDictionary { } *_visibleDict;
    MFLock *_visibleDictLock;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_mainThreadPopulateDictForMimeType:(id)a0;
- (int)dictValueForMimeType:(id)a0;

@end
