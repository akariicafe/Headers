@class NSString, LAPSPasscodeChangeUIPresentationController, LAPSPasscodeChangeUIAdapterOptions;
@protocol LAPSPasscodeChangeUIDelegate;

@interface LAPSPasscodeChangeUIAdapter : NSObject <LAPSFetchOldPasscodeViewControllerDelegate, LAPSFetchNewPasscodeViewControllerDelegate, LAPSPasscodeChangeUI> {
    LAPSPasscodeChangeUIPresentationController *_presentationController;
    LAPSPasscodeChangeUIAdapterOptions *_options;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<LAPSPasscodeChangeUIDelegate> delegate;

- (void).cxx_destruct;
- (void)deactivateWithCompletion:(id /* block */)a0;
- (void)_presentPasscodeDoesNotMeetRequirementsError:(id)a0 completion:(id /* block */)a1;
- (void)_presentPasscodeIsTooSimpleErrorWithCompletion:(id /* block */)a0;
- (void)_presentPasscodesDidNotMatchErrorWithCompletion:(id /* block */)a0;
- (void)fetchNewPasscode:(id)a0 completion:(id /* block */)a1;
- (void)fetchNewPasscodeViewController:(id)a0 verifyPasscode:(id)a1;
- (void)fetchNewPasscodeViewController:(id)a0 verifyPasscode:(id)a1 matchesPasscode:(id)a2;
- (void)fetchOldPasscode:(id)a0 completion:(id /* block */)a1;
- (id)fetchOldPasscodeViewController:(id)a0 backoffMessageForTimeout:(long long)a1;
- (void)fetchOldPasscodeViewController:(id)a0 verifyPasscode:(id)a1;
- (id)initWithParentVC:(id)a0;
- (id)initWithParentVC:(id)a0 options:(id)a1;

@end
