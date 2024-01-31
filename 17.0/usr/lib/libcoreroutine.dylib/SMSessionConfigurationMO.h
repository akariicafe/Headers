@class NSUUID, NSString, NSArray, NSDate, SMSessionManagerStateMO, NSData;

@interface SMSessionConfigurationMO : NSManagedObject

@property (copy, nonatomic) NSUUID *sessionIdentifier;
@property (nonatomic) short sessionType;
@property (copy, nonatomic) NSDate *sessionStartDate;
@property (retain, nonatomic) NSDate *sessionTimeBound;
@property (nonatomic) double destinationLatitude;
@property (nonatomic) double destinationLongitude;
@property (nonatomic) short destinationReferenceFrame;
@property (nonatomic) double destinationRadius;
@property (nonatomic) short destinationType;
@property (nonatomic) double expectedTravelTime;
@property (nonatomic) double additionalTravelTime;
@property (nonatomic) short transportType;
@property (retain, nonatomic) NSString *primaryHandle;
@property (retain, nonatomic) NSArray *secondaryHandles;
@property (retain, nonatomic) SMSessionManagerStateMO *sessionManagerState;
@property (copy, nonatomic) NSDate *userResponseSafeDate;
@property (retain, nonatomic) NSData *destinationMapItem;
@property (nonatomic) BOOL sessionSupportsHandoff;

+ (id)fetchRequest;
+ (id)initWithSessionConfiguration:(id)a0 inManagedObjectContext:(id)a1;
+ (id)initWithSessionConfiguration:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;
+ (id)managedObjectWithSessionIdentifier:(id)a0 sessionType:(unsigned long long)a1 sessionStartDate:(id)a2 destinationLatitude:(double)a3 destinationLongitude:(double)a4 destinationReferenceFrame:(int)a5 destinationRadius:(double)a6 destinationType:(unsigned long long)a7 expectedTravelTime:(double)a8 additionalTravelTime:(double)a9 transportType:(unsigned long long)a10 sessionTimeBound:(id)a11 primaryHandle:(id)a12 secondaryHandles:(id)a13 destinationMapItem:(id)a14 sessionSupportsHandoff:(BOOL)a15 managedObject:(id)a16 managedObjectContext:(id)a17;

@end
