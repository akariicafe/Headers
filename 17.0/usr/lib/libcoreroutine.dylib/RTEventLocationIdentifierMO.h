@class NSString, NSNumber, NSSet;

@interface RTEventLocationIdentifierMO : NSManagedObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *source;
@property (retain, nonatomic) NSString *calendarIdentifier;
@property (retain, nonatomic) NSSet *loiHistogramItems;

+ (id)managedObjectWithEventLocationIdentifier:(id)a0 inManagedObjectContext:(id)a1;

@end
