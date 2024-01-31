@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BYPreferencesController : NSObject

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableDictionary *preferences;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (void)flushEverything;
+ (id)buddyPreferencesExcludedFromBackup;
+ (id)buddyPreferencesInternal;
+ (id)genericPreferencesEphemeral;
+ (id)buddyPreferences;
+ (id)buddyPreferencesEphemeral;
+ (void)persistEverything;
+ (id)randomPreferences;

- (id)initWithDomain:(id)a0;
- (void)removeObjectForKey:(id)a0 onlyFromMemory:(BOOL)a1;
- (id)init;
- (id)objectForKey:(id)a0 includeCache:(BOOL)a1;
- (void)reset;
- (void)flush;
- (BOOL)boolForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 persistImmediately:(BOOL)a2;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)persist;

@end
