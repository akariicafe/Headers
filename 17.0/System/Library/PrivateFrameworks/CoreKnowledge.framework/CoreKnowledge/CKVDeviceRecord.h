@class NSNumber, NSString;

@interface CKVDeviceRecord : NSObject <CKVDatabaseRecord>

@property (readonly, nonatomic) NSNumber *deviceRowId;
@property (readonly, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableName;
+ (id)genSQLCreateStatements;
+ (id)recordFromDatabaseValueRow:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDatabaseValueRow:(id)a0;
- (BOOL)isEqualToItemRecord:(id)a0;

@end
