@class SMSessionManagerState, NSDate;

@interface SMWatchdogRecord : NSObject

@property (retain, nonatomic) SMSessionManagerState *state;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSDate *startDate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithState:(id)a0 timeout:(double)a1;

@end
