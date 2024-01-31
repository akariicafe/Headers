@class ML3GreenTeaLogger;

@interface MPGreenTeaLoggerWrapper : NSObject {
    ML3GreenTeaLogger *_logger;
}

- (void).cxx_destruct;
- (void)beginLogAccessInterval;
- (void)endLogAccessInterval;
- (id)initWithAccessorName:(id)a0;
- (void)logAccess;

@end
