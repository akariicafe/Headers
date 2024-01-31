@class NSString, NSSet, NSDate;

@interface ManagedPlaylist : NSManagedObject

@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSSet *items;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
