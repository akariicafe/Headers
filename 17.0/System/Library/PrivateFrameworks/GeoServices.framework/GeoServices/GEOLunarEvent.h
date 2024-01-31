@class NSDate;

@interface GEOLunarEvent : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) double bearing;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) BOOL isAboveHorizon;
@property (readonly, nonatomic) NSDate *date;

- (void).cxx_destruct;

@end
