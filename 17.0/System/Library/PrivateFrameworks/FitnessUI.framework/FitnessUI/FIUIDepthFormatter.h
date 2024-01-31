@interface FIUIDepthFormatter : NSObject {
    void /* unknown type, empty encoding */ depthFormatter;
    void /* unknown type, empty encoding */ unitManager;
}

- (id)init;
- (void).cxx_destruct;
- (id)formatDepthValue:(double)a0 unit:(unsigned long long)a1;
- (id)formatMaxDepth:(double)a0 unit:(unsigned long long)a1;
- (id)formatUnderwaterTime:(double)a0;
- (id)formatWaterTemperatureRangeWithLower:(double)a0 upper:(double)a1;
- (id)formatWaterTemperatureValue:(double)a0;
- (id)initWithUnitManager:(id)a0;

@end
