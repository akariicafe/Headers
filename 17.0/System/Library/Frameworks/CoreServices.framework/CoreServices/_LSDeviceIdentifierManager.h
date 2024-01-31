@class NSMutableDictionary;

@interface _LSDeviceIdentifierManager : NSObject {
    NSMutableDictionary *_sharedCaches;
}

+ (id)sharedInstance;

- (id)init;
- (id)cacheForPersona:(id)a0;
- (void).cxx_destruct;

@end
