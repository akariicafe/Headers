@class NSString, NSManagedObjectID;

@interface _PFObjectCKRecordZoneLink : NSObject <NSCopying>

@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) NSString *recordName;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObjectID:(id)a0 recordName:(id)a1;

@end
