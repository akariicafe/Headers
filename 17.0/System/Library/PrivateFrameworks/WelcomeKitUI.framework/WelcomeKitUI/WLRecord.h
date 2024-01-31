@interface WLRecord : NSObject

+ (void)stopRecording;
+ (void)startRecording;
+ (BOOL)isInterrupted;

@end
