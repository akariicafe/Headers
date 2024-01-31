@class NSDate;

@interface RTHintMO : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (nonatomic) double horizontalUncertainty;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) long long source;

+ (id)fetchRequest;
+ (id)managedObjectWithHint:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithLatitude:(double)a0 longitude:(double)a1 horizontalUncertainty:(double)a2 source:(long long)a3 date:(id)a4 inManagedObjectContext:(id)a5;

@end
