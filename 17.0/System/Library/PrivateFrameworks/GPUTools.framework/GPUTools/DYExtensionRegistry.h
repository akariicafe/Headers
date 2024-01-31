@class NSMutableDictionary;

@interface DYExtensionRegistry : NSObject {
    NSMutableDictionary *_slotsMap;
    NSMutableDictionary *_identifiersMap;
}

+ (id)sharedExtensionRegistry;

- (id)init;
- (void)dealloc;
- (id)extensionsForSlot:(id)a0;
- (void)registerExtension:(id)a0;

@end
