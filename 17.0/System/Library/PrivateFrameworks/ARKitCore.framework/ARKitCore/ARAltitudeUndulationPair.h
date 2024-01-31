@interface ARAltitudeUndulationPair : NSObject

@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double undulation;
@property (readonly, nonatomic) BOOL lookupFailed;
@property (readonly, nonatomic) long long source;

- (id)initWithAltitude:(double)a0 undulation:(double)a1 lookupFailed:(BOOL)a2 source:(long long)a3;

@end
