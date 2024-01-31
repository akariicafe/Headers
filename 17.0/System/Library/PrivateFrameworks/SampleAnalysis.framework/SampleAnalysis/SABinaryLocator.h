@class NSString, NSMutableDictionary;

@interface SABinaryLocator : NSObject {
    NSMutableDictionary *_mappings;
    NSString *_buildNumber;
    BOOL _dirty;
    BOOL _enabled;
}

+ (id)sharedBinaryLocator;

- (id)init;
- (oneway void)done;
- (void).cxx_destruct;

@end
