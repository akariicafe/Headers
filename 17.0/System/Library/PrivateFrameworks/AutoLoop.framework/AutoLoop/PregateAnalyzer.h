@class NSArray, NSDictionary, NSData, PregateFeatureBuilder;

@interface PregateAnalyzer : NSObject

@property (retain) NSDictionary *defaultParameters;
@property struct CGSize { double width; double height; } inputVideoSize;
@property BOOL haveInputVideoSize;
@property int trimInput_firstIndex;
@property int trimInput_lastIndex;
@property int gatingPassTrimResult_firstIndex;
@property int gatingPassTrimResult_lastIndex;
@property (retain) NSData *perFrameTranslationVecs;
@property (retain) NSArray *badFrameFlags;
@property (retain) NSArray *focusScores;
@property (retain) PregateFeatureBuilder *featureBuilder;
@property (retain) NSDictionary *pregateParameters;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumRequiredTrimLength;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } requiredFrameTime;
@property struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } requiredTimeRange;
@property struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } inputTrimTime;
@property (readonly) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } outputTrimTime;

+ (id)pregateFailureReasonsToString:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (int)processGainAndExposureData:(id)a0 intoFlagsArray:(id)a1 firstIndex:(long long)a2 lastIndex:(long long)a3;
- (struct MetadataFloatVector { float x0; float x1; })cumulativePanForStartIndex:(long long)a0 lastIndex:(long long)a1;
- (BOOL)exposuresViolateThresholdFraction:(float)a0 exposure1:(float)a1 exposure2:(float)a2;
- (int)fetchVideoDimensionsFromMetadata;
- (BOOL)findFrameIndicesInFrameArray:(id)a0 forTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 startIndex:(int *)a2 endIndex:(int *)a3;
- (int)findGatingPassViaTrimming:(id)a0;
- (long long)findLongestPassingSegmentInFrameFlags:(id)a0 startIndex:(long long)a1 endIndex:(long long)a2 startOfRun:(long long *)a3 gatingFailures:(int *)a4;
- (BOOL)findNextNonInterpFrameFromIndex:(long long)a0 backwards:(BOOL)a1 inFrameInfoArray:(id)a2 toValue:(long long *)a3;
- (BOOL)findSurroundingNonInterpForIndex:(long long)a0 inFrameInfoArray:(id)a1 prevIndex:(long long *)a2 nextIndex:(long long *)a3;
- (BOOL)frameIndexIsFocusing:(long long)a0 inFrameData:(id)a1 failureReason:(int *)a2;
- (int)getFocusDataFromFrameData:(id)a0 toFocusingFlags:(id)a1;
- (int)getFrameMetadataArray:(id *)a0;
- (BOOL)getParamForKey:(id)a0 toCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1;
- (BOOL)getParamForKey:(id)a0 toFloat:(float *)a1;
- (BOOL)getParamForKey:(id)a0 toInt:(long long *)a1;
- (int)getPerFrameGatingData:(id)a0 firstIndex:(long long)a1 lastIndex:(long long)a2;
- (int)getZoomFlagsFromFrameData:(id)a0 toArray:(id)a1;
- (int)isCumulativePanAcceptableForFrames:(id)a0 firstIndex:(long long)a1 lastIndex:(long long)a2;
- (id)paramValueForKey:(id)a0;
- (int)processMotionVectorsFromFrameData:(id)a0 toVectorArray:(struct MetadataFloatVector { float x0; float x1; } *)a1;
- (int)processPregateSuccess:(int *)a0;
- (int)processPresentationTimesFromData:(id)a0 toBadFrameFlags:(id)a1 withMaxDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 maxInterpGapTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 maxInterpFrameCount:(long long)a4 firstIndex:(long long)a5 lastIndex:(long long)a6;
- (BOOL)subsegmentMeetsTrimCriteriaForFrames:(id)a0 firstFrame:(long long)a1 lastFrame:(long long)a2 firstFrameTimeOut:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a3 lastFrameTimeOut:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a4 preciseTrimTimeOut:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a5;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeForFrameFromArray:(id)a0 frameIndex:(long long)a1;

@end
