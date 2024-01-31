@class NSMutableDictionary;

@interface MSDPreferencesFile : NSObject

@property (retain) NSMutableDictionary *cache;

+ (id)sharedInstance;
+ (BOOL)preferencesFileExists;
+ (id)preferencesFilePath;
+ (id)preferencesFileUrl;

- (void)reload;
- (BOOL)removeObjectsForKeys:(id)a0;
- (id)init;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (BOOL)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (BOOL)saveCache;
- (void)populateCache;
- (id)deepCopy:(id)a0;
- (void)raiseInvalidPropertyListObjectExceptionForObject:(id)a0;

@end
