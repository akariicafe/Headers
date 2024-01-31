@class NSString, NSUUID;

@interface STUniquedManagedObject : NSManagedObject

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSUUID *sortKey;

- (void)awakeFromInsert;
- (id)computeUniqueIdentifier;
- (id)dictionaryRepresentation;
- (void)updateUniqueIdentifier;

@end
