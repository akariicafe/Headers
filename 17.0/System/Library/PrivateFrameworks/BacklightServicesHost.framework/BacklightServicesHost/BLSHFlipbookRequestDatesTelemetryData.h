@class NSArray, NSString;

@interface BLSHFlipbookRequestDatesTelemetryData : NSObject

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) NSArray *environmentIdentifiers;
@property (readonly, nonatomic) double shortestInterval;
@property (readonly, nonatomic) double averageInterval;
@property (readonly, nonatomic) double longestInterval;
@property (readonly, nonatomic) double completionDuration;
@property (readonly, nonatomic) BOOL didReset;
@property (readonly, nonatomic) unsigned long long timedOutCount;
@property (readonly, nonatomic) NSString *firstEnvironmentIdentifier;
@property (readonly, nonatomic) unsigned int environmentCount;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTimestamp:(double)a0 environmentIdentifiers:(id)a1 shortestInterval:(double)a2 averageInterval:(double)a3 longestInterval:(double)a4 completionDuration:(double)a5 didReset:(BOOL)a6 timedOutCount:(unsigned int)a7;

@end
