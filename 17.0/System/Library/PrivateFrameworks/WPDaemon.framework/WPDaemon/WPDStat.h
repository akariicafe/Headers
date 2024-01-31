@class NSDate;

@interface WPDStat : NSObject

@property double currentTime;
@property (retain) NSDate *lastTime;

- (void)calculateTimeUpdate;
- (id)init;
- (void)startTime;
- (void)stopTime;
- (void).cxx_destruct;

@end
