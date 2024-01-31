@class DNDModeConfigurationService;

@interface WFFocusConfigurationLinkAction : WFLinkAction

@property (retain, nonatomic) DNDModeConfigurationService *configurationService;

+ (id)genericRuntimeError;

- (id)localizedAppName;
- (void).cxx_destruct;
- (id)name;
- (id)parameterDefinitions;
- (id)descriptionSummary;
- (void)clearFocusConfiguration;
- (id)contentDestinationWithError:(id *)a0;
- (void)createAndCommitFocusConfigurationToDND;
- (id)currentFocusConfiguration;
- (void)disableFocusConfiguration;
- (id)dndApplicationIdentifier;
- (void)enableFocusConfiguration;
- (BOOL)isRunningInsideFocusConfigurationExtension;
- (id)localizedSubcategoryForCategory:(id)a0;
- (unsigned long long)parameterCollapsingBehavior;
- (id)parameterSummary;
- (BOOL)requiresRemoteExecution;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)selectedFocusIdentifier;
- (void)setFocusConfigurationEnablementStatus:(BOOL)a0;
- (BOOL)shouldAskForValuesWhileProcessingParameterStates;
- (BOOL)shouldStripSensitiveContentFromParameterSerialization;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)toggleFocusConfiguration;
- (void)updateParameterStatesFromCurrentDNDConfiguration;
- (void)wasAddedToWorkflowByUser:(id)a0;
- (void)willBeginProcessingParameterStates;

@end
