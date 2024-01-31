@class RTLearnedTransitionMO, RTLearnedPlaceMO, NSDate, NSNumber, NSDateInterval;

@interface RTLearnedVisitMO : RTCloudManagedObject

@property (copy, nonatomic) NSNumber *locationUncertainty;
@property (copy, nonatomic) NSNumber *confidence;
@property (copy, nonatomic) NSNumber *dataPointCount;
@property (copy, nonatomic) NSDate *entryDate;
@property (copy, nonatomic) NSDate *exitDate;
@property (copy, nonatomic) NSNumber *locationLatitude;
@property (copy, nonatomic) NSNumber *locationLongitude;
@property (copy, nonatomic) NSNumber *locationReferenceFrame;
@property (copy, nonatomic) NSNumber *locationHorizontalUncertainty;
@property (copy, nonatomic) NSNumber *locationAltitude;
@property (copy, nonatomic) NSNumber *locationVerticalUncertainty;
@property (copy, nonatomic) NSNumber *locationSourceAccuracy;
@property (copy, nonatomic) NSNumber *placeConfidence;
@property (copy, nonatomic) NSNumber *placeSource;
@property (retain, nonatomic) RTLearnedPlaceMO *place;
@property (retain, nonatomic) RTLearnedTransitionMO *inbound;
@property (retain, nonatomic) RTLearnedTransitionMO *outbound;
@property (readonly, nonatomic) NSDateInterval *interval;

+ (id)fetchRequest;
+ (id)managedObjectWithVisit:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithVisit:(id)a0 place:(id)a1 inManagedObjectContext:(id)a2;
+ (id)managedObjectWithVisit:(id)a0 place:(id)a1 managedObject:(id)a2 inManagedObjectContext:(id)a3;

- (void).cxx_destruct;
- (BOOL)intersectsWithVisit:(id)a0 distanceCalculator:(id)a1;
- (BOOL)overlapsWithVisit:(id)a0;

@end
