@class SBFZStackParticipant, NSString, SBFZStackResolver, SBHardwareButtonService;
@protocol BSInvalidatable;

@interface SBHardwareButtonZStackClient : NSObject <SBHardwareButtonServiceObserver, SBFZStackParticipantDelegate>

@property (readonly, weak, nonatomic) SBFZStackResolver *zStackResolver;
@property (readonly, weak, nonatomic) SBHardwareButtonService *hardwareButtonService;
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant;
@property (retain, nonatomic) id<BSInvalidatable> hardwareButtonObserverAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)zStackParticipantDidChange:(id)a0;
- (void)dealloc;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void).cxx_destruct;
- (void)_updateZStackParticipant;
- (void)buttonService:(id)a0 buttonKind:(long long)a1 eventsConsumedDidChange:(unsigned long long)a2;
- (id)initWithZStackResolver:(id)a0 hardwareButtonService:(id)a1;

@end
