@class NSArray, HDProfile, NSMutableDictionary;

@interface _HDSourceOrderTransactionCache : NSObject {
    HDProfile *_profile;
    NSArray *_defaultOrderedSources;
    NSMutableDictionary *_orderedSourceIDsByBundleIdentifier;
}

- (id)init;
- (void).cxx_destruct;

@end
