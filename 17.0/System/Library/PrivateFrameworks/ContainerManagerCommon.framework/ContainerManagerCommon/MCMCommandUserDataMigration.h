@interface MCMCommandUserDataMigration : MCMCommand

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (BOOL)preflightClientAllowed;
- (BOOL)_bundleContainerExistsForDataContainer:(id)a0 error:(id *)a1;
- (int)_intendedDataProtectionClassBasedOnEntitlementsForIdentifier:(id)a0;
- (void)_setDataProtectionIfNecessaryOnContainer:(id)a0;

@end
