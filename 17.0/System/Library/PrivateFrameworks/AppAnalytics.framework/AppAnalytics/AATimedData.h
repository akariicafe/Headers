@class NSString, NSDate;

@interface AATimedData : NSObject <AADataEventType> {
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ endDate;
}

@property (class, nonatomic, readonly) NSString *dataName;

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ duration;

- (id)init;
- (void).cxx_destruct;
- (id)toDict;

@end
