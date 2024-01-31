@class EFSQLObjectPropertyMapper, EDMessageQueryTransformer;
@protocol EFSQLValueExpressable;

@interface EDMessageQueryParser : NSObject

@property (readonly, nonatomic) EDMessageQueryTransformer *transformer;
@property (readonly, nonatomic) id<EFSQLValueExpressable> additionalSQLClause;
@property (readonly, nonatomic) id<EFSQLValueExpressable> additionalSQLClauseForCountQuery;
@property (readonly, nonatomic) id<EFSQLValueExpressable> additionalSQLClauseForGlobalMessageQuery;
@property (readonly, nonatomic) id<EFSQLValueExpressable> additionalSQLClauseForJournaledMessages;
@property (readonly, nonatomic) EFSQLObjectPropertyMapper *sqlPropertyMapper;

+ (id)log;

- (void).cxx_destruct;
- (id)initWithSchema:(id)a0 protectedSchema:(id)a1 accountsProvider:(id)a2 vipManager:(id)a3 messagePersistence:(id)a4 mailboxPersistence:(id)a5;
- (void)_modifySelectStatement:(id)a0 byAddingAdditionalClause:(id)a1;
- (id)_sqlQueryToCountResultsForQuery:(id)a0 distinctByGlobalMessageID:(BOOL)a1;
- (id)sqlCountQueryForQuery:(id)a0;
- (id)sqlQueryForQuery:(id)a0 protectedDataAvailable:(BOOL)a1;
- (id)sqlQueryToCountJournaledMessagesForQuery:(id)a0;
- (id)sqlQueryToCountMessagesWithGlobalMessageID:(long long)a0 matchingQuery:(id)a1;

@end
