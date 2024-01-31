@class AFAnalyticsTurnBasedInstrumentationContext;

@interface SiriUIInstrumentationManager : NSObject <AFAnalyticsDialogIdentifierAssociationProvider>

@property (readonly) AFAnalyticsTurnBasedInstrumentationContext *currentInstrumentationTurnContext;

+ (id)sharedManager;

- (id)init;
- (id)associatedDialogIdentifiersForAceObjectIdentifier:(id)a0;
- (void)storeCurrentInstrumentationTurnContext:(id)a0;
- (void)emitUUFRPresentedEventWith:(id)a0 snippetClass:(id)a1 dialogIdentifier:(id)a2 dialogPhase:(id)a3;

@end
