@class PRSService, _AMUIPosterUpdate;

@interface AMUIPosterUpdater : NSObject {
    PRSService *_lock_service;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _AMUIPosterUpdate *_lock_inflightInfographConfigurationUpdate;
    _AMUIPosterUpdate *_lock_pendingInfographConfigurationUpdate;
}

+ (id)defaultUpdater;

- (id)init;
- (void).cxx_destruct;
- (void)_clearInflightAndFireNextRequest;
- (void)_lock_fireInfographUpdate:(id)a0;
- (BOOL)updateInfograph:(id)a0 forPosterConfiguration:(id)a1 completion:(id /* block */)a2;

@end
