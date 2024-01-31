@class NSTimer, NSMutableArray;

@interface TVLALSDataExtractor : NSObject {
    struct __IOHIDEventSystemClient { } *_ioHIDSystemClient;
    id /* block */ _completion;
    NSMutableArray *_results;
    unsigned long long _readCount;
    NSTimer *_timer;
}

+ (unsigned int)_displayID;
+ (void)extractALSData:(id /* block */)a0;
+ (void)extract:(unsigned long long)a0 ALSReadings:(id /* block */)a1;
+ (id)extractALSCalibrationData;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
