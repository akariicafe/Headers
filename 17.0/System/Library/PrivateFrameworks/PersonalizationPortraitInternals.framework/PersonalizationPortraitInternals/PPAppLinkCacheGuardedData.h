@class NSDictionary, NSMutableSet, NSMutableDictionary;

@interface PPAppLinkCacheGuardedData : NSObject {
    NSMutableSet *_enabledAppIDs;
    NSDictionary *_urlToAppID;
    NSMutableDictionary *_mutableURLToAppID;
}

- (void).cxx_destruct;

@end
