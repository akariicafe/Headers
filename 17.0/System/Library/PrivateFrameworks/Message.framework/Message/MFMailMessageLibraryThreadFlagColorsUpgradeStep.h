@class NSString;

@interface MFMailMessageLibraryThreadFlagColorsUpgradeStep : NSObject <EDTableUpgradeStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_threadsTableSchemaWithMessagesTable:(id)a0 conversationsTable:(id)a1 threadScopesTable:(id)a2;
+ (int)runWithConnection:(id)a0;


@end
