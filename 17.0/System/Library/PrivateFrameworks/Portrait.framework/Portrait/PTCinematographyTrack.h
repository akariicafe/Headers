@class NSArray, NSString, PTCinematographyScript;

@interface PTCinematographyTrack : NSObject

@property (weak, nonatomic) PTCinematographyScript *script;
@property (readonly, nonatomic) NSArray *timeRanges;
@property (nonatomic, getter=isUserCreated) BOOL userCreated;
@property (readonly, nonatomic) NSString *cachedTrackIdentifierString;
@property (readonly, nonatomic) unsigned long long trackType;
@property (readonly, nonatomic) long long trackIdentifier;
@property (readonly, nonatomic) long long groupIdentifier;
@property (readonly, nonatomic) unsigned long long detectionType;
@property (readonly, nonatomic, getter=isDiscrete) BOOL discrete;

- (id)init;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (void)setGroupIdentifier:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeAtIndex:(unsigned long long)a0;
- (id)detectionNearestTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setTrackIdentifier:(long long)a0;
- (id)_initWithTrack:(id)a0;
- (void)_addStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toTimeRanges:(id)a2;
- (id)_asCinematographyDictionary;
- (id)_asMutableCinematographyDictionary;
- (id)_calculateTimeRanges;
- (id)_initWithCinematographyDictionary:(id)a0;
- (id)_trackByTrimmingToTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 subtracting:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)debugTrackIdentifierString;
- (id)detectionAtOrBeforeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)detectionInFrame:(id)a0;
- (id)detectionsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithDetectionType:(unsigned long long)a0;
- (unsigned long long)timeRangeCount;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeRangeEndForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
