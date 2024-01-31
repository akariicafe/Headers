@class CLPlacemark, NSDate;

@interface MapsSuggestionsTrip : NSObject

@property (readonly, nonatomic) CLPlacemark *placemark;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

- (void).cxx_destruct;
- (BOOL)isInternational;
- (id)initWithPlacemark:(id)a0 startDate:(id)a1 endDate:(id)a2;

@end
