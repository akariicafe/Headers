@interface APGreenTeaLogger : NSObject

@property (readonly, nonatomic) struct ct_green_tea_logger_s { } *logger;

- (void)willAccessLocation;
- (id)init;
- (void)dealloc;
- (void)willTransmitLocationFor:(unsigned long long)a0;

@end
