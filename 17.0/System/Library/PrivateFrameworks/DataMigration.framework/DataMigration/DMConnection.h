@class DMXPCConnection;

@interface DMConnection : NSObject {
    DMXPCConnection *_connection;
}

+ (id)connection;

- (id)init;
- (void)deferExit;
- (id)previousBuildVersion;
- (void)dealloc;
- (id)userDataDispositionAuxiliaryData;
- (void)testMigrationUIWithProgress:(BOOL)a0 forceInvert:(BOOL)a1;
- (BOOL)isMigrationNeeded;
- (void)reportMigrationFailure;
- (id)connection;
- (void)migrationPluginResults:(id /* block */)a0;
- (unsigned int)userDataDisposition;
- (void).cxx_destruct;
- (void)forceMigrationOnNextRebootWithUserDataDisposition:(unsigned int)a0;
- (void)cancelDeferredExit;
- (long long)migrateCheckingNecessity:(BOOL)a0 lastRelevantPlugin:(id)a1 testMigrationInfrastructureOnly:(BOOL)a2;
- (void)changeVisibility:(BOOL)a0 completion:(id /* block */)a1;
- (id)migrationPhaseDescription;
- (id)orderedPluginIdentifiers;

@end
