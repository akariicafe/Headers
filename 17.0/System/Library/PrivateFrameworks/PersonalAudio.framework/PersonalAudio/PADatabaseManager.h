@interface PADatabaseManager : HCDatabaseManager

+ (id)sharedManager;

- (void)logMessage:(id)a0;
- (id)currentConfiguration;
- (id)containerIdentifier;
- (id)cloudKitContainer;
- (id)managedObjectModelName;
- (void)contentDidUpdate:(id)a0;
- (BOOL)saveConfiguration:(id)a0;

@end
