@class NSDate;

@interface CMRecordedGyroData : CMGyroData {
    double _startDateValue;
    struct { double x; double y; double z; } _rotationRate;
    double _timestampValue;
    float _temperatureValue;
}

@property (readonly) unsigned long long identifier;
@property (readonly) NSDate *startDate;
@property (readonly) double startTime;
@property (readonly) float temperature;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (double)timestamp;
- (struct { double x0; double x1; double x2; })rotationRate;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(struct CMGyro50 { float x0; float x1; float x2; float x3; unsigned long long x4; } *)a0 timestamp:(unsigned long long)a1 walltime:(double)a2 identifier:(unsigned long long)a3;
- (void)resetWithData:(struct CMGyro50 { float x0; float x1; float x2; float x3; unsigned long long x4; } *)a0 timestamp:(unsigned long long)a1 walltime:(double)a2 identifier:(unsigned long long)a3;

@end
