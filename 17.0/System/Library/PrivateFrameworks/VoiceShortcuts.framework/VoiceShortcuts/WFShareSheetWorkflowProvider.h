@protocol WFDatabaseProvider;

@interface WFShareSheetWorkflowProvider : NSObject

@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;

- (id)shareSheetWorkflowsForExtensionMatchingDictionaries:(id)a0 hostBundleIdentifier:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)generateSingleUseTokenForWorkflowIdentifier:(id)a0;
- (id)initWithDatabaseProvider:(id)a0;

@end
