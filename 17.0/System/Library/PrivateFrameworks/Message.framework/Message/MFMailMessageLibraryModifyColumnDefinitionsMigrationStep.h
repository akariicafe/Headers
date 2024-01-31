@class EFSQLSchema, EDPersistenceDatabaseConnection;

@interface MFMailMessageLibraryModifyColumnDefinitionsMigrationStep : NSObject

@property (retain, nonatomic) EDPersistenceDatabaseConnection *connection;
@property (readonly, nonatomic) EFSQLSchema *schema;

- (void).cxx_destruct;
- (id)actionFlagsTableSchema;
- (id)actionLabelsTableSchema;
- (id)actionMessagesTableSchema;
- (id)initWithSQLiteConnection:(id)a0;
- (id)localMessageActionsTableSchema;
- (id)mailboxesTableStubSchema;
- (id)messagesTableStubSchema;
- (BOOL)performMigrationStep;
- (id)serverLabelsTableSchema;
- (id)serverMessagesTableSchema;

@end
