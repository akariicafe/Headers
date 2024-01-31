@class EFSQLTableSchema, EFSQLSchema, NSString;

@interface EDAddSendersTableUpgradeStep : NSObject <EDTableUpgradeStep>

@property (class, readonly, nonatomic) EFSQLSchema *schema;
@property (class, readonly, nonatomic) EFSQLTableSchema *sendersTableSchema;
@property (class, readonly, nonatomic) EFSQLTableSchema *senderAddressesTableSchema;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)runWithConnection:(id)a0;


@end
