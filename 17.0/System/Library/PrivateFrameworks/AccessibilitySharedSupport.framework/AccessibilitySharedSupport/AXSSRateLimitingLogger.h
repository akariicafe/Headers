@class NSObject, NSDate;
@protocol OS_os_log;

@interface AXSSRateLimitingLogger : NSObject

@property (retain, nonatomic) NSDate *_dateSinceLastLog;
@property (retain, nonatomic) NSObject<OS_os_log> *categoryLog;
@property (readonly, nonatomic) double timeInterval;
@property (readonly, nonatomic) unsigned char logLevel;

- (void).cxx_destruct;
- (BOOL)logString:(id)a0;
- (void)_logStringAtProperLevel:(id)a0;
- (id)initWithLogLevel:(unsigned char)a0 categoryLog:(id)a1 timeInterval:(double)a2;

@end
