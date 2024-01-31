@class PTCinematographyDetection, NSDictionary, NSArray, NSNumber;

@interface PTCinematographyFrameDetections : NSObject

@property (readonly) NSDictionary *cachedDetectionsByFocusIdentifier;
@property (readonly) NSDictionary *cachedDetectionsByTrackIdentifier;
@property BOOL didCacheAutoFocusDetection;
@property (retain) PTCinematographyDetection *cachedAutoFocusDetection;
@property BOOL didCacheCustomDetection;
@property (retain) PTCinematographyDetection *cachedCustomDetection;
@property (retain) NSNumber *baseFocusTrackNumberOverride;
@property (readonly) NSArray *detections;
@property (readonly) NSNumber *detectorDidRun;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } presentationTime;
@property (readonly) NSArray *allTrackIdentifiers;
@property (readonly) NSArray *allTrackIdentifiersForCinematicChoice;
@property (readonly) NSArray *allFocusIdentifiers;
@property (readonly) PTCinematographyDetection *autoFocusDetection;
@property (readonly) PTCinematographyDetection *customDetection;

+ (id)frameDetections:(id)a0 detectorDidRun:(id)a1 presentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)bestDetectionForGroupIdentifier:(long long)a0;
- (id)detectionForTrackIdentifier:(long long)a0;
- (id)_detectionsByFocusIdentifier;
- (id)_detectionsByTrackIdentifier;
- (void)addDetection:(id)a0;
- (id)bestDetectionForGroupIdentifier:(long long)a0 options:(unsigned long long)a1;
- (id)detectionForFocusIdentifier:(id)a0;
- (void)flushCachedDetectionsDictionaries;
- (id)initWithDetections:(id)a0 detectorDidRun:(id)a1 presentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

@end
