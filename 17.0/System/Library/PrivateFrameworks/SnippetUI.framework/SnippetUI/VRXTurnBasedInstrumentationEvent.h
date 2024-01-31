@interface VRXTurnBasedInstrumentationEvent : VRXInstrumentationEvent

@property (readonly, nonatomic) BOOL requiresNewTurn;

- (void)emitWithTurnIdentifier:(id)a0;

@end
