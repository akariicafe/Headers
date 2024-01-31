@class AVTimeFormatter;

@interface NATimeFormatter : NSObject

@property (retain, nonatomic) AVTimeFormatter *elapsedDurationFormatter;
@property (retain, nonatomic) AVTimeFormatter *remainingDurationFormatter;

- (id)init;
- (void).cxx_destruct;
- (id)formatElapsedDuration:(double)a0;
- (id)formatRemainingDuration:(double)a0;

@end
