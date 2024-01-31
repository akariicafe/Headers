@class NSString, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface GEOEventRecorderInstrumentation : NSObject {
    NSObject<OS_dispatch_queue> *_loggingQueue;
    NSString *_filepath;
    NSString *_geoFilepath;
    NSString *_movieFilepath;
    NSDate *_startDate;
}

+ (id)defaultInstrumentation;
+ (void)endInstrumentation;
+ (id)initializeDefaultInstrumentation;

- (id)init;
- (void).cxx_destruct;
- (void)captureEventRecorderScreenVideo;
- (void)captureUIEvent:(id)a0;
- (void)_captureScreenVideo:(id)a0;
- (void)_setupLogging;
- (void)captureUserActionLogMessageEvent:(id)a0;
- (id)getRecordedFilePaths;
- (void)initializeFilepaths;
- (void)writeString:(id)a0 ToFilepath:(id)a1;

@end
