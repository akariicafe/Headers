@class SBFZStackParticipant, NSArray, NSString, NSMapTable, NSMutableArray;
@protocol BSInvalidatable;

@interface SBFZStackResolver : NSObject <BSDescriptionProviding> {
    id<BSInvalidatable> _stateCaptureHandle;
    NSMutableArray *_participants;
    NSMapTable *_participantObservers;
    SBFZStackParticipant *_highestZStackParticipant;
    NSString *_resolvedStackDescription;
}

@property (readonly, copy, nonatomic) NSArray *_registeredParticipants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (id)acquireParticipantWithIdentifier:(long long)a0 delegate:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)removeObserver:(id)a0 ofParticipantWithIdentifier:(long long)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)addObserver:(id)a0 ofParticipantWithIdentifier:(long long)a1;

@end
