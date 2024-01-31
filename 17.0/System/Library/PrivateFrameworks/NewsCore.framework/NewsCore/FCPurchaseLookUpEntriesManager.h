@class NSMutableDictionary, FCKeyValueStore;

@interface FCPurchaseLookUpEntriesManager : NSObject {
    FCKeyValueStore *_localStore;
    NSMutableDictionary *_entriesByTagID;
}

- (void).cxx_destruct;

@end
