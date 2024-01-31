@class NSString, NSDate;

@interface ManagedCatalogTipJournal : NSManagedObject

@property (nonatomic, copy) NSDate *date;
@property (nonatomic) double elapsedTime;
@property (nonatomic, copy) NSString *journalIdentifier;
@property (nonatomic, copy) NSString *tipIdentifier;
@property (nonatomic) double totalTime;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
