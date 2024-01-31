@class DNDSStateProviderSystemSnapshot, NSString, DNDState, DNDSModeConfigurationManager;

@interface DNDSStateProvider : NSObject <DNDSStateProviding> {
    DNDSModeConfigurationManager *_modeConfigurationManager;
}

@property (copy) DNDSStateProviderSystemSnapshot *lastSystemSnapshot;
@property (copy) DNDState *lastCalculatedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModeConfigurationManager:(id)a0;
- (void).cxx_destruct;
- (id)recalculateStateForSnapshot:(id)a0;

@end
