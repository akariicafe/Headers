@class NSString, BLSHBacklightDisplayStateMachine, BLSHBacklightEnvironmentPresentation, BLSHBacklightEnvironmentStateMachine;

@interface BLSHBacklightAggregateState : NSObject <BLSHBacklightTransitionStateMachineState> {
    BLSHBacklightDisplayStateMachine *_displayModeSource;
}

@property (retain) BLSHBacklightEnvironmentStateMachine *presentationSource;
@property (readonly) long long displayMode;
@property (readonly) BLSHBacklightEnvironmentPresentation *presentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bls_shortLoggingStringForState:(id)a0;
+ (BOOL)isState:(id)a0 equalToObject:(id)a1;
+ (id)bls_loggingStringForState:(id)a0;
+ (id)bls_debugLoggingDescriptionForState:(id)a0;
+ (unsigned long long)stateHash:(id)a0;

- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDisplayModeSource:(id)a0;

@end
