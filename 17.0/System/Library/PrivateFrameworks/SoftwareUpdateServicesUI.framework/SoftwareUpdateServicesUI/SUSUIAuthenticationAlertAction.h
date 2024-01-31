@class BSAction, SUDescriptor, SURollbackDescriptor, SUAutoInstallOperation;

@interface SUSUIAuthenticationAlertAction : BSAction {
    BOOL _loaded;
    SUDescriptor *_descriptor;
    SURollbackDescriptor *_rollbackDescriptor;
    SUAutoInstallOperation *_autoInstallOperation;
    BOOL _forInstallTonight;
    BOOL _canDeferInstallation;
    unsigned long long _alertType;
}

@property (retain, nonatomic) BSAction *baseAction;
@property (readonly, nonatomic) unsigned long long alertType;
@property (readonly, retain, nonatomic) SUDescriptor *descriptor;
@property (readonly, retain, nonatomic) SURollbackDescriptor *rollbackDescriptor;
@property (readonly, retain, nonatomic) SUAutoInstallOperation *autoInstallOperation;
@property (readonly, nonatomic) BOOL forInstallTonight;
@property (readonly, nonatomic) BOOL canDeferInstallation;

- (Class)fallbackXPCEncodableClass;
- (void)_loadIfNecessary;
- (void).cxx_destruct;
- (void)fireCompletionIfNecessaryForResult:(BOOL)a0;
- (id)initWithDescriptor:(id)a0 autoInstallOperation:(id)a1 forInstallTonight:(BOOL)a2 canDeferInstallation:(BOOL)a3 completionQueue:(id)a4 completionBlock:(id /* block */)a5;
- (id)initWithInfo:(id)a0 forBaseAction:(id)a1;
- (id)initWithRollbackDescriptor:(id)a0 canDeferInstallation:(BOOL)a1 completionQueue:(id)a2 completionBlock:(id /* block */)a3;

@end
