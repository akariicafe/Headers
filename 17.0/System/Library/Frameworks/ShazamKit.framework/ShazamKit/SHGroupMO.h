@class NSString, SHMetadataMO, NSSet;

@interface SHGroupMO : NSManagedObject

@property (copy, nonatomic) NSString *syncID;
@property (retain, nonatomic) SHMetadataMO *metadata;
@property (retain, nonatomic) NSSet *tracks;

+ (id)fetchRequest;

@end
