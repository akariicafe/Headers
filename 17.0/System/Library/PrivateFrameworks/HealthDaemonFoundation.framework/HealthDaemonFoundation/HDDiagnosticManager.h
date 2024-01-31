@class NSHashTable;

@interface HDDiagnosticManager : NSObject {
    NSHashTable *_objects;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedDiagnosticManager;

- (id)_diagnosticsOverview;
- (id)init;
- (void)logAllDiagnostics;
- (id)diagnosticsForKeys:(id)a0;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (void)addObject:(id)a0;
- (id)_diagnosticsForKeys:(id)a0 shouldLog:(BOOL)a1;

@end
