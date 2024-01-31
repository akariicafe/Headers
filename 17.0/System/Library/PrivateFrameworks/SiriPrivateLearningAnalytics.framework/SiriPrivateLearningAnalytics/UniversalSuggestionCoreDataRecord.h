@class NSUUID, NSString, NSOrderedSet;

@interface UniversalSuggestionCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, copy) NSString *queryEntityName;
@property (nonatomic, retain) NSOrderedSet *candidates;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
