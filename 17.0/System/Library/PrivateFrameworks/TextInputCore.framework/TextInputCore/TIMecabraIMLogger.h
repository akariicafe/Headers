@class NSMutableString;

@interface TIMecabraIMLogger : NSObject

@property (retain, nonatomic) NSMutableString *loggedMessage;

+ (BOOL)isLoggingEnabled;

- (void).cxx_destruct;
- (void)beginLogging;
- (id)logFilePath;
- (void)endLoggingForInput:(id)a0 atFinalTimeMark:(unsigned long long)a1;
- (void)markTime:(unsigned long long)a0;
- (void)writeLogToFile;

@end
