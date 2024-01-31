@class NSArray, NSHashTable;

@interface ATXPosterConfigurationCacheGuardedData : NSObject {
    NSArray *configurations;
    NSHashTable *observers;
}

- (id)init;
- (void).cxx_destruct;

@end
