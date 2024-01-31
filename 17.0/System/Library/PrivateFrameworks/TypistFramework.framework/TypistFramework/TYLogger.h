@interface TYLogger : NSObject

+ (void)closeLogFile;
+ (void)logToFile:(BOOL)a0;
+ (void)logToSTDERR:(BOOL)a0;
+ (id)openLogFile:(id)a0;
+ (id)openLogFile:(id)a0 inDirectory:(id)a1;

@end
