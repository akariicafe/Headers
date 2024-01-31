@class NSString, CKContainer, NSObject;
@protocol OS_dispatch_source;

@interface BRCAccountWaitOperation : _BRCOperation <BRCOperationSubclass> {
    NSObject<OS_dispatch_source> *_source;
    CKContainer *_ckContainer;
    long long _lastAccountStatus;
    BOOL _resumed;
    BOOL _cancelled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (void)start;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)resumeIfNecessary;
- (void).cxx_destruct;
- (void)cancel;
- (id)createActivity;
- (void)_accountDidChange;
- (void)_accountChangeHandler;
- (id)descriptionForCKAccountStatus:(long long)a0 dumpContext:(id)a1;
- (id)initWithCKContainer:(id)a0;
- (id)subclassableDescriptionWithContext:(id)a0;

@end
