@class NSManagedObjectID;

@interface MKFObjectDatabaseID : HMFObject

@property (readonly, copy) NSManagedObjectID *objectID;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMKFObject:(id)a0;

@end
