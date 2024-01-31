@class CPLLibraryManager, NSString, NSProgress, CPLPlatformObject;

@interface CPLChangeSession : NSObject <CPLAbstractObject>

@property (class, readonly) NSString *shortDescription;

@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSProgress *sessionProgress;
@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) CPLLibraryManager *libraryManager;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stateDescriptionForState:(unsigned long long)a0;
+ (id)platformImplementationProtocol;

- (void)finalizeWithCompletionHandler:(id /* block */)a0;
- (void)beginSessionWithKnownLibraryVersion:(id)a0 resetTracker:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithLibraryManager:(id)a0;
- (id)createSessionContext;
- (void)tearDownWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (id)redactedDescription;
- (void).cxx_destruct;

@end
