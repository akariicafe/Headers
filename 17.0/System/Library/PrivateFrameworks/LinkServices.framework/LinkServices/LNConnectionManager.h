@class LNTranscriptPrivilegedProvider, NSMutableDictionary, NSString;

@interface LNConnectionManager : NSObject <LNConnectionDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableDictionary *connectionsByBundleIdentifier;
@property (readonly, nonatomic) LNTranscriptPrivilegedProvider *transcriptProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)removeConnection:(id)a0;
- (id)init;
- (void)addConnection:(id)a0;
- (void)connection:(id)a0 didCloseWithError:(id)a1;
- (void).cxx_destruct;
- (void)appWillResignActive:(id)a0;
- (id)connectionForBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1 mangledTypeName:(id)a2 error:(id *)a3;
- (void)donateActionRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidateAllConnections;

@end
