@class NSDictionary;

@interface FTCinematicTrack : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long identifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } box;
@property (nonatomic) unsigned long long objectKind;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastDetectionTime;
@property (nonatomic) float boxConfidence;
@property (nonatomic) float detectionConfidence;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastTappedTime;
@property (retain, nonatomic) NSDictionary *metadata;
@property (nonatomic) BOOL isTapSpawned;
@property (nonatomic) BOOL isHighPriority;
@property unsigned long long sourceObservationId;

+ (id)fromTrack:(struct shared_ptr<ft::Track> { struct Track *x0; struct __shared_weak_count *x1; })a0 isHighPriority:(BOOL)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
