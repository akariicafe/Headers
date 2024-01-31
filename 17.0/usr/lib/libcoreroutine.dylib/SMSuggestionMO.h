@class NSString, NSDate;

@interface SMSuggestionMO : NSManagedObject

@property (copy, nonatomic) NSString *buddyEmail;
@property (copy, nonatomic) NSString *buddyPhoneNumber;
@property (nonatomic) double destinationLocationLatitude;
@property (nonatomic) double destinationLocationLongitude;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic) double sourceLocationLatitude;
@property (nonatomic) double sourceLocationLongitude;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) short suggestionTrigger;
@property (nonatomic) short suggestionUserType;
@property (nonatomic) short suppressionReason;
@property (nonatomic) short sessionType;

+ (id)fetchRequest;
+ (id)initWithSuggestion:(id)a0 managedObjectContext:(id)a1;
+ (id)managedObjectWithSuggestionTrigger:(unsigned long long)a0 suggestionUserType:(unsigned long long)a1 suppressionReason:(unsigned long long)a2 sessionType:(unsigned long long)a3 sourceLocationLatitude:(double)a4 sourceLocationLongitude:(double)a5 destinationLocationLatitude:(double)a6 destinationLocationLongitude:(double)a7 buddyEmail:(id)a8 buddyPhoneNumber:(id)a9 startDate:(id)a10 endDate:(id)a11 creationDate:(id)a12 managedObjectContext:(id)a13;

@end
