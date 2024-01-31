@class NSString, NSUserDefaults, NSMutableDictionary;

@interface SLDCloudKitSyncPersistence : NSObject {
    NSString *_name;
    NSString *_suiteName;
    NSUserDefaults *_defaults;
    NSMutableDictionary *_cache;
    id _nilValue;
}

- (void)reset;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;

@end
