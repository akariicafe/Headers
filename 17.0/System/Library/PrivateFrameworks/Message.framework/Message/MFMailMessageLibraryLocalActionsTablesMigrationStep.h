@class EDPersistenceDatabaseConnection;

@interface MFMailMessageLibraryLocalActionsTablesMigrationStep : NSObject

@property (retain, nonatomic) EDPersistenceDatabaseConnection *connection;

+ (id)log;

- (void).cxx_destruct;
- (id)_actionFlagsActionIndexDefinition;
- (id)_actionFlagsTableDefinition;
- (id)_actionLabelsActionIndexDefinition;
- (id)_actionLabelsLabelIndexDefinition;
- (id)_actionLabelsTableDefinition;
- (id)_actionMessagesActionIndexDefinition;
- (id)_actionMessagesDestinationMessageIndexDefinition;
- (id)_actionMessagesMessageIndexDefinition;
- (id)_actionMessagesTableDefinition;
- (id)_localMessageActionsMailboxRowIDIndexDefinition;
- (id)_localMessageActionsTableDefinition;
- (id)_offlineCacheOperations;
- (BOOL)_populateServerMessages;
- (id)_serverLabelsTableDefinition;
- (id)_serverMessagesMessageIndexDefinition;
- (id)_serverMessagesTableDefinition;
- (id)initWithSQLiteConnection:(id)a0;
- (BOOL)performMigrationStep;

@end
