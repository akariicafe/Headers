@class NSString, SBInCallPresentationSession;

@interface SBInCallTransientOverlayPresentationWorkspaceTransaction : SBMainWorkspaceTransaction

@property (readonly, copy, nonatomic) NSString *analyticsSource;
@property (readonly, nonatomic) SBInCallPresentationSession *sourcePresentationSession;

- (void)_begin;
- (void).cxx_destruct;
- (void)_performInCallPresentationWithCompletion:(id /* block */)a0;
- (id)initWithTransitionRequest:(id)a0 sourcePresentationSession:(id)a1 analyticsSource:(id)a2;

@end
