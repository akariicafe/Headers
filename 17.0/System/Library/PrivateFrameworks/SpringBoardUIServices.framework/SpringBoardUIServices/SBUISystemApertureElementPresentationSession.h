@class NSString, SBSSystemApertureSceneCreationRequest, SBUISystemApertureElementSource;
@protocol SBUISystemApertureElementProviding;

@interface SBUISystemApertureElementPresentationSession : NSObject <BSInvalidatable> {
    id<SBUISystemApertureElementProviding> _elementProvider;
    SBUISystemApertureElementSource *_associatedSource;
    SBSSystemApertureSceneCreationRequest *_request;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)_associateWithSourceIfNeeded:(id)a0;
- (void)_handleSourceDidConnect:(id)a0;
- (void)activateWithElementProvider:(id)a0;

@end
