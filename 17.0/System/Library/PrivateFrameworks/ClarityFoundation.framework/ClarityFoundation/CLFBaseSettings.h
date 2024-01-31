@class NSString, NSArray, NSMutableDictionary;

@interface CLFBaseSettings : AXBaseSettings {
    NSMutableDictionary *_preferenceKeysBySelectorName;
}

@property (class, readonly, nonatomic) NSString *domainName;
@property (class, readonly, nonatomic) NSArray *allPreferenceSelectorsAsStrings;

+ (void)deleteAllKeys;

- (id)init;
- (id)observeUpdatesForSelector:(SEL)a0 handler:(id /* block */)a1;
- (void)registerUpdateBlock:(id /* block */)a0 withListener:(id)a1;
- (id)domainNameForPreferenceKey:(id)a0;
- (void).cxx_destruct;
- (id)preferenceKeyForSelector:(SEL)a0;

@end
