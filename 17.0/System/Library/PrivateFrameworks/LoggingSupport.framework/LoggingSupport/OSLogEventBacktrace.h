@class NSArray;

@interface OSLogEventBacktrace : NSObject

@property (readonly, nonatomic) NSArray *frames;

- (void)dealloc;
- (id)initWithFrames:(id)a0;
- (id)initWithBacktrace:(struct os_log_backtrace_s { struct os_log_backtrace_frame_s *x0; int x1; } *)a0;
- (id)initWithSingleFrame:(id)a0;

@end
