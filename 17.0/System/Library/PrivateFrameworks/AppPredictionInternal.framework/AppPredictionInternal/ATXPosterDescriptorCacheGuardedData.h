@class NSDictionary, NSHashTable;

@interface ATXPosterDescriptorCacheGuardedData : NSObject {
    NSDictionary *descriptors;
    NSHashTable *observers;
}

- (id)init;
- (void).cxx_destruct;

@end
