@class NSSet, NSArray;

@interface CEMManagementStateCommand_Status : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;
@property (class, readonly, copy) NSSet *allowedReasons;

@property (copy, nonatomic) NSArray *statusCommands;
@property (copy, nonatomic) NSArray *statusDeclarations;

+ (id)buildRequiredOnlyWithCommands:(id)a0 withDeclarations:(id)a1;
+ (id)buildWithCommands:(id)a0 withDeclarations:(id)a1;

- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
