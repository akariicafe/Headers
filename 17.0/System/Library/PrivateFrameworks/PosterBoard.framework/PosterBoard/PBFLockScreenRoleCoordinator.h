@interface PBFLockScreenRoleCoordinator : PBFPosterRoleCoordinator

+ (id)supportedAttributes;
+ (id)supportedChangeTypes;
+ (BOOL)supportsSupplementalUpdates;

- (BOOL)_executeChange:(id)a0 storage:(id)a1 outEvents:(out id *)a2 error:(out id *)a3;
- (BOOL)_prepareAttributesForIngestionForPoster:(id)a0 existingAttributes:(id)a1 incomingAttributes:(id)a2 proposedAttributesToDelete:(out id *)a3 proposedAttributesToUpdate:(out id *)a4 storage:(id)a5 currentCollection:(id)a6 error:(out id *)a7;
- (id)defaultAttributesForNewPosterFromProvider:(id)a0;
- (id)determineActivePosterConfigurationForStorage:(id)a0 context:(id)a1;
- (id)initWithStorage:(id)a0 modelCoordinatorProvider:(id)a1;
- (BOOL)notifyEventWasReceived:(id)a0 changes:(out id *)a1 storage:(id)a2;
- (BOOL)synchronizeFileSystemAttributesForStorage:(id)a0 error:(out id *)a1;

@end
