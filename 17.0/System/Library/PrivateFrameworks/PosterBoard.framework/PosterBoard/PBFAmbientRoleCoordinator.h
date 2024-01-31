@interface PBFAmbientRoleCoordinator : PBFPosterRoleCoordinator

+ (id)supportedAttributes;
+ (id)supportedChangeTypes;
+ (id)subscribedEvents;

- (BOOL)_executeAmbientChargerConfigurationUpdateForPosterUUID:(id)a0 newAmbientChargerConfiguration:(id)a1 currentCollection:(id)a2 storage:(id)a3 error:(out id *)a4;
- (BOOL)_executeChange:(id)a0 storage:(id)a1 outEvents:(out id *)a2 error:(out id *)a3;
- (BOOL)_prepareAttributesForIngestionForPoster:(id)a0 existingAttributes:(id)a1 incomingAttributes:(id)a2 proposedAttributesToDelete:(out id *)a3 proposedAttributesToUpdate:(out id *)a4 storage:(id)a5 currentCollection:(id)a6 error:(out id *)a7;
- (id)_sortedPosterUUIDsByExtensionIdentifierFromStorage:(id)a0;
- (id)defaultAttribute:(id)a0 forNewPosterFromProvider:(id)a1;
- (id)defaultAttributesForNewPosterFromProvider:(id)a0;
- (id)determineActivePosterConfigurationForStorage:(id)a0 context:(id)a1;
- (BOOL)finalizeChangesWithChangeHandler:(id)a0 outEvents:(out id *)a1 error:(out id *)a2;
- (id)initWithStorage:(id)a0 modelCoordinatorProvider:(id)a1;
- (void)noteDidResetRoleCoordinator:(id)a0;
- (BOOL)notifyEventWasReceived:(id)a0 changes:(out id *)a1 storage:(id)a2;
- (id)sortedPosterUUIDsFromStorage:(id)a0;
- (id)sortedPosterUUIDsUsingSortedPosterUUIDsByExtensionIdentifier:(id)a0;
- (BOOL)synchronizeFileSystemAttributesForStorage:(id)a0 error:(out id *)a1;
- (BOOL)validateEventIsRelevent:(id)a0;

@end
