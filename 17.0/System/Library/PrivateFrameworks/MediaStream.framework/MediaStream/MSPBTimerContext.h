@class NSDate;

@interface MSPBTimerContext : NSObject

@property (nonatomic) BOOL isValid;
@property (retain, nonatomic) NSDate *date;

+ (id)contextWithDate:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
