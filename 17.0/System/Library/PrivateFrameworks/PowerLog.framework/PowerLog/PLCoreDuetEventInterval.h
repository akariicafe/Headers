@class NSDate;

@interface PLCoreDuetEventInterval : NSObject

@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;

- (id)description;
- (void).cxx_destruct;
- (id)joinWithInterval:(id)a0;
- (BOOL)intersects:(id)a0;

@end
