@class PPSRequestDispatcher, NSDateInterval;

@interface PPSTimeIntervalSetGenerator : NSObject {
    PPSRequestDispatcher *_dispatcher;
    unsigned long long _settings;
    unsigned long long _directionality;
    NSDateInterval *_powerlogTimeBoundaries;
}

- (void).cxx_destruct;
- (id)initWithFilepath:(id)a0 settings:(unsigned long long)a1 directionality:(unsigned long long)a2;
- (id)intervalSetForTimeSeries:(id)a0 withIntervalStartCheckBlock:(id /* block */)a1 intervalEndCheckBlock:(id /* block */)a2 payloadBlock:(id /* block */)a3 coalescePolicy:(id)a4;
- (id)systemHaltTimeSeries;
- (id)systemSleepTimeSeries;
- (id)timelineBoundariesFromPowerlog;

@end
