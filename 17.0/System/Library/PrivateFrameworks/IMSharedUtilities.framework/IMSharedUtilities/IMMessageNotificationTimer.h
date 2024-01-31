@class NSNumber, NSDate;

@interface IMMessageNotificationTimer : NSObject

@property (retain, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSNumber *numberDingsLeft;
@property (readonly, nonatomic) BOOL areDingsRemaining;

- (void)dealloc;
- (id)initWithDate:(id)a0;
- (void)reduceNumberDingsLeft;

@end
