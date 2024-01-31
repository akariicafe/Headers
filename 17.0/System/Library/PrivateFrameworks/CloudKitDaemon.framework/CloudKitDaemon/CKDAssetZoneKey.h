@class CKRecordZoneID;

@interface CKDAssetZoneKey : NSObject <NSCopying>

@property (readonly, nonatomic) long long destinationDatabaseScope;
@property (readonly, nonatomic) CKRecordZoneID *destinationZoneID;
@property (readonly, nonatomic) CKRecordZoneID *sourceZoneID;
@property (readonly, nonatomic) long long sourceDatabaseScope;
@property (readonly, nonatomic) BOOL isCrossOwner;

- (unsigned long long)hash;
- (id)initWithDestinationZoneID:(id)a0 destinationDatabaseScope:(long long)a1;
- (id)CKPropertiesDescription;
- (id)description;
- (id)initWithDestinationZoneID:(id)a0 destinationDatabaseScope:(long long)a1 sourceZoneID:(id)a2 sourceDatabaseScope:(long long)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
