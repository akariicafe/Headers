@interface WFStartCallAction : WFHandleSystemIntentAction

- (id)icon;
- (long long)callCapability;
- (long long)preferredCallProvider;
- (id)supportedIdentifiers;
- (BOOL)isRunningOniPad;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (id)errorFromHandleResponse:(id)a0 intent:(id)a1;
- (BOOL)skipsProcessingHiddenParameters;
- (BOOL)canOfferSuggestionsForParameterWithKey:(id)a0;
- (id)communicationMethod;
- (id)contentDestinationWithError:(id *)a0;
- (id)disabledOnPlatforms;
- (id)errorFromConfirmResponse:(id)a0 intent:(id)a1;
- (id)errorFromResolutionResult:(id)a0 forSlot:(id)a1 onIntent:(id)a2;
- (void)fetchSuggestedEntititiesForParameterWithKey:(id)a0 completionHandler:(id /* block */)a1;
- (id)generatedIntentWithIdentifier:(id)a0 input:(id)a1 processedParameters:(id)a2 error:(id *)a3;
- (id)intentDescriptorFromParameterState;
- (id)intentDescriptorWithIntentClassName:(id)a0 launchableBundleId:(id)a1;
- (id)localizedKeyParameterDisplayName;
- (BOOL)populatesInputFromInputParameter;
- (BOOL)shouldOpenAppThroughSiriForIntent:(id)a0 intentResponse:(id)a1;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)systemEntityCollectionIdentifierForDisambiguatingParameterWithKey:(id)a0;
- (id)callingServiceNotAvailableError;
- (id)airplaneModeError;
- (id)appConfigurationRequiredError;
- (id)contactNotSupportedByAppErrorForContacts:(id)a0;
- (id)errorFromStartCallResponse:(id)a0 intent:(id)a1;
- (void)fetchFavoriteCallDestinationsWithCompletion:(id /* block */)a0;
- (void)fetchRecentCallDestinationWithTelephony:(BOOL)a0 completion:(id /* block */)a1;
- (id)localizedCallServiceName;
- (id)suggestedEntityFromCallDescriptor:(id)a0;

@end
