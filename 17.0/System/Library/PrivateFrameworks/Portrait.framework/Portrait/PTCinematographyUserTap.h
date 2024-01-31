@class PTCinematographyDetection, NSNumber;

@interface PTCinematographyUserTap : NSObject

@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (readonly) PTCinematographyDetection *detection;
@property (readonly, getter=isStrong) BOOL strong;
@property (readonly) long long trackIdentifier;
@property (readonly) NSNumber *trackNumber;
@property (readonly, getter=isGroupTap) BOOL groupTap;
@property (readonly) long long groupIdentifier;

- (void).cxx_destruct;
- (id)focusIdentifier;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 tappedDetection:(id)a1 strong:(BOOL)a2;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 tappedDetection:(id)a1 strong:(BOOL)a2 group:(BOOL)a3;

@end
