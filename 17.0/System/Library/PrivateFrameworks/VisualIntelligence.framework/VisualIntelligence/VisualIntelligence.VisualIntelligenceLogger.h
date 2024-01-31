@class OS_os_log;

@interface VisualIntelligence.VisualIntelligenceLogger : NSObject

@property (class, nonatomic, readonly) OS_os_log *osLog;
@property (class, nonatomic, readonly) BOOL shouldLogMessage;
@property (class, nonatomic, readonly) BOOL shouldLogVerboseMessage;

+ (void)logVerboseWithType:(unsigned char)a0 evaluatedMessage:(id)a1 file:(id)a2 line:(long long)a3;
+ (void)logWithType:(unsigned char)a0 evaluatedMessage:(id)a1 file:(id)a2 line:(long long)a3;

- (id)init;
- (void).cxx_destruct;

@end
