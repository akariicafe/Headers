@interface WFGreenTeaLogger : NSObject

@property (readonly, nonatomic) struct ct_green_tea_logger_s { } *logger;

+ (id)sharedLogger;
+ (void)log:(id)a0;

- (id)init;
- (void)dealloc;
- (void)log:(id)a0;

@end
