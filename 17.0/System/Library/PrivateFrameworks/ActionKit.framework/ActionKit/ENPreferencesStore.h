@class NSString, NSMutableDictionary;

@interface ENPreferencesStore : NSObject

@property (retain, nonatomic) NSString *pathname;
@property (retain, nonatomic) NSMutableDictionary *store;

+ (id)defaultPreferenceStore;
+ (id)pathnameForStoreFilename:(id)a0;
+ (id)preferenceStoreWithSecurityApplicationGroupIdentifier:(id)a0;

- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)load;
- (id)initWithURL:(id)a0;
- (id)init;
- (void)removeAllItems;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)save;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)decodedObjectForKey:(id)a0;
- (id)initWithStoreFilename:(id)a0;

@end
