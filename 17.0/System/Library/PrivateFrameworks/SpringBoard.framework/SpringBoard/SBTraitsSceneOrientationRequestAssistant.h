@class SBTraitsSceneParticipantDelegate, NSString;

@interface SBTraitsSceneOrientationRequestAssistant : NSObject <BSInvalidatable>

@property (readonly, weak, nonatomic) SBTraitsSceneParticipantDelegate *traitsDelegate;
@property (readonly, weak, nonatomic) NSString *errorDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)_performCoalescedBroadcastArbitrationUpdateWithReason:(id)a0;
- (void)_startSceneOrientationRequestWithDesiredOrientations:(unsigned long long)a0 error:(out id *)a1;
- (void)checkValidityAgainstUpdateReasons:(long long)a0;
- (id)initWithTraitsSceneDelegate:(id)a0 errorDomain:(id)a1;
- (void)setUpForTransitionContextIfNeeded:(id)a0;

@end
