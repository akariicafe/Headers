@class NSString, NSNumber, NSTimeZone;

@interface SSTimeZoneLocation : NSObject

@property (retain) NSString *location;
@property (retain) NSNumber *latitude;
@property (retain) NSNumber *longitude;
@property (retain) NSString *countryName;
@property (retain) NSString *countryCode;
@property (retain) NSTimeZone *timeZone;
@property BOOL isCaptial;

- (void).cxx_destruct;

@end
