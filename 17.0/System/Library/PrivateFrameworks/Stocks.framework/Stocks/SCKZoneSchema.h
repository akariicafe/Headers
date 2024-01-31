@class NSArray, CKRecordZoneID, NSString;

@interface SCKZoneSchema : NSObject

@property (copy, nonatomic) NSArray *recordSchemas;
@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID;
@property (readonly, copy, nonatomic) NSString *zoneName;
@property (readonly, nonatomic, getter=isAtomic) BOOL atomic;
@property (readonly, copy, nonatomic) NSArray *allRecordFieldNames;

- (id)schemaForRecordType:(id)a0;
- (void).cxx_destruct;
- (id)validateRecords:(id)a0;
- (BOOL)isValidRecord:(id)a0;
- (id)initWithName:(id)a0 atomic:(BOOL)a1 recordSchemas:(id)a2;

@end
