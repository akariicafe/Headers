@class NSData, NSString;

@interface WFPersistedSerializedParameters : NSManagedObject

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *queryName;

+ (id)fetchRequest;

@end
