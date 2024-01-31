@class FCThreadSafeMutableDictionary;
@protocol FCBackgroundTaskable;

@interface FCRemoteDefaults : NSObject

@property (readonly, weak, nonatomic) id<FCBackgroundTaskable> backgroundTaskable;
@property (readonly, nonatomic) FCThreadSafeMutableDictionary *remoteDefaults;

- (id)init;
- (id)initWithBackgroundTaskable:(id)a0;
- (void)updateRemoteDefaults;
- (void)checkForUpdate;
- (id)URLForKey:(id)a0;
- (id)URLRequest;
- (void).cxx_destruct;
- (void)processResponse:(id)a0 data:(id)a1 error:(id)a2;
- (id)dictionaryForKey:(id)a0;
- (BOOL)isAvailable;
- (id)stringForKey:(id)a0;
- (id)objectForKey:(id)a0;

@end
