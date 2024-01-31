@class NSMutableDictionary, NSString, NSMutableArray, HMIVideoAnalyzerConfiguration;

@interface HMIBackgroundEstimator : HMFObject <HMFLogging>

@property (readonly) HMIVideoAnalyzerConfiguration *configuration;
@property (readonly) NSMutableDictionary *tracks;
@property (readonly) NSMutableDictionary *inactiveTracks;
@property (readonly) unsigned long long minSampleSize;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } backgroundExpireInterval;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } backgroundChangeInterval;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } backgroundChangeResetInterval;
@property unsigned short *assignment;
@property float *runningMean;
@property float *runningStd;
@property unsigned long long numImages;
@property unsigned long long numTracks;
@property struct CGSize { double width; double height; } imageSize;
@property struct CGSize { double width; double height; } modelSize;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } foregroundTimeStamp;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } backgroundTimeStamp;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } backgroundChangeTimeStamp;
@property BOOL adjustBrightness;
@property (readonly) NSMutableArray *motionDetections;
@property (readonly) NSMutableArray *motionTimeStamps;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } motionValidInterval;
@property (readonly) BOOL hasNewBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)reset;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)_blobsFromAssignment:(unsigned short *)a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_updateRunningStd:(float *)a0 withAuxBuffer:(float *)a1 runningMean:(const float *)a2 runningSquaredMean:(const float *)a3;
- (BOOL)_adjustBackgroundAtAttribute:(const char *)a0 backgroundChanged:(BOOL)a1 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)_copyFromOutputBuffer:(const float *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1;
- (void)_copyFromPixelBuffer:(struct __CVBuffer { } *)a0 toInputBuffer:(float *)a1 translateCol:(int)a2 translateRow:(int)a3;
- (void)_correctRunningMeanBrightnessAtAttribute:(const char *)a0;
- (void)_ensureInternalBuffersForPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)_expireMotionDetectionsAtTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)_exportInternalStateForPixelBuffer:(struct __CVBuffer { } *)a0 exportMode:(unsigned long long)a1;
- (id)_foregroundBlobsFromBlobs:(id)a0 backgroundChanged:(BOOL *)a1;
- (void)_foregroundDifferencesFromPixelBuffer:(struct __CVBuffer { } *)a0 differences:(float *)a1;
- (void)_foregroundPixelsFromPixelBuffer:(struct __CVBuffer { } *)a0 attribute:(char *)a1 assignment:(unsigned short *)a2 useChromaOnly:(BOOL)a3;
- (float)_intersectionOverUnionFromBlob:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 assignment:(unsigned short *)a2;
- (BOOL)_invalidateBackgroundForPixelBuffer:(struct __CVBuffer { } *)a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)_predictForegroundFromPixelBuffer:(struct __CVBuffer { } *)a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_setAssignment:(unsigned short *)a0 greaterThanType:(unsigned short)a1 value:(unsigned short)a2 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 scale:(float)a4;
- (id)_stationaryTracks:(id)a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)_updateBackgroundFromPixelBuffer:(struct __CVBuffer { } *)a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_updateCurrentTracks:(id)a0 inactiveTracks:(id)a1 blobs:(id)a2 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)_updateRunningMean:(float *)a0 runningSquaredMean:(float *)a1 fromInputBuffer:(const float *)a2 decay:(float)a3;
- (id)analyzePixelBuffer:(struct __CVBuffer { } *)a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)assignBackgroundEvents:(id)a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)assignForegroundEvents:(id)a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)handleMotionDetection:(id)a0 inFrame:(struct opaqueCMSampleBuffer { } *)a1;
- (id)visualizeBackgroundMean;
- (id)visualizeBackgroundStd;
- (id)visualizeForegroundAssignment;
- (id)visualizeForegroundDiffForPixelBuffer:(struct __CVBuffer { } *)a0;

@end
