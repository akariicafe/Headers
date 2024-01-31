@class NSTimeZone, NSString, NSSet, CLSEIVenue, NSDate;

@interface CLSEIEvent : NSManagedObject

@property (nonatomic) long long uuid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) long long timeZoneOffset;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) CLSEIVenue *venue;
@property (copy, nonatomic) NSSet *artists;
@property (copy, nonatomic) NSSet *categories;

@end
