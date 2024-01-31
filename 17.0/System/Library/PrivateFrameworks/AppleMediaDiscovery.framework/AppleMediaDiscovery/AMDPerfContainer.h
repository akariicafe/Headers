@class NSMutableDictionary;

@interface AMDPerfContainer : NSObject

@property (retain, nonatomic) NSMutableDictionary *memoryUsage;
@property (retain, nonatomic) NSMutableDictionary *timeUsage;
@property (retain, nonatomic) NSMutableDictionary *samples;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) char level;
@property (nonatomic) double timeConversionFactor;

+ (float)getMemoryUsage:(id)a0 logType:(id)a1 timeDelta:(double)a2;

- (void).cxx_destruct;
- (id)initWithSwitch:(BOOL)a0 atLevel:(char)a1;
- (double)getTime;

@end
