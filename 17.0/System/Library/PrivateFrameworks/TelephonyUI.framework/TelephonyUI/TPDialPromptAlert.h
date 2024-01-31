@class NSString, SBSRemoteAlertHandle, NSSet, BSProcessHandle;

@interface TPDialPromptAlert : TPAlert <SBSRemoteAlertHandleObserver>

@property (retain, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle;
@property (copy, nonatomic) id /* block */ dialAction;
@property (readonly, copy, nonatomic) NSString *buttonTitle;
@property (readonly, copy, nonatomic) NSSet *handles;
@property (readonly, nonatomic) BSProcessHandle *processHandle;
@property (nonatomic) BOOL isFaceTimeRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)dealloc;
- (void)show;
- (void)invalidate;
- (void).cxx_destruct;
- (id)title;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (id)defaultButtonTitle;
- (id)otherButtonTitle;
- (id)initWithDialRequest:(id)a0 dialAction:(id /* block */)a1;
- (id)initWithJoinRequest:(id)a0 dialAction:(id /* block */)a1;
- (void)defaultResponse;
- (id)initWithButtonTitle:(id)a0 handles:(id)a1 isFaceTimeRequest:(BOOL)a2 dialAction:(id /* block */)a3;
- (void)otherResponse;
- (id)phoneNumberHandle;

@end
