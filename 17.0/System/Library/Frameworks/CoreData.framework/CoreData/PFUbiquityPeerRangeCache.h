@class NSString, NSMutableDictionary, NSPersistentStore;

@interface PFUbiquityPeerRangeCache : NSObject {
    NSMutableDictionary *_cachedRanges;
    NSMutableDictionary *_allEntityRanges;
    NSMutableDictionary *_translatedGlobalIDs;
    NSString *_localPeerID;
    NSString *_storeName;
    NSPersistentStore *_privateStore;
    BOOL _cachedStorePeerRanges;
}

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)initWithPrivateStore:(id)a0 storeName:(id)a1 andLocalPeerID:(id)a2;

@end
