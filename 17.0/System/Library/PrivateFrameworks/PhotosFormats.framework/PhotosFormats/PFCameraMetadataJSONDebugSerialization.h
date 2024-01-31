@class NSMutableDictionary;

@interface PFCameraMetadataJSONDebugSerialization : NSObject {
    NSMutableDictionary *_debugInfo;
}

+ (id)vnObjectPlaceholderForObject:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addObject:(id)a0 forKey:(id)a1;
- (id)JSONDebugData;

@end
