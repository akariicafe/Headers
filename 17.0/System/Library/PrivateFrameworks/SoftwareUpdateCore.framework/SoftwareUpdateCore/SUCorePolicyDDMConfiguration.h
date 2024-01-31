@class SUCoreLog, SUCorePersistedState, NSObject;
@protocol OS_dispatch_queue;

@interface SUCorePolicyDDMConfiguration : NSObject

@property (retain) SUCorePersistedState *persistedState;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;
@property (retain) SUCoreLog *logger;

+ (id)sharedInstance;
+ (id)declarationFromAllDeclarations:(id)a0;
+ (id)declarationFromAllDeclarationDicts:(id)a0;
+ (id)getDaemonCacheDirectory;
+ (id)statePersistencePath;

- (id)allKeys;
- (id)description;
- (void).cxx_destruct;
- (id)_dateFromString:(id)a0;
- (id)allDeclarations;
- (BOOL)addDeclaration:(id)a0 withKey:(id)a1;
- (BOOL)addDeclaration:(id)a0 withKey:(id)a1 returningError:(id *)a2;
- (id)currentlyApplicableDeclaration;
- (id)declarationForKey:(id)a0;
- (id)initWithState;
- (id)initWithStatePersistencePath:(id)a0;
- (void)removeAllDeclarations;
- (void)removeAllInvalidDeclarations;
- (BOOL)removeDeclarationForKey:(id)a0;

@end
