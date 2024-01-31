@class CinematicTrack, CinematicFramingSessionFramingParameters, CinematicFramingSessionOptions;
@protocol FramingSpaceManager;

@interface SceneFramingEngine : NSObject {
    id<FramingSpaceManager> _framingSpaceManager;
    CinematicFramingSessionFramingParameters *_activeFramingParameters;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastFrameWithDetectionsTimestamp;
    BOOL _lastFrameHadSubjects;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _slackDeadband;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _idealDeadband;
    unsigned short _framingState;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _subjectRectHistoryBuffer[10];
    unsigned short _subjectRectHistoryCount;
    unsigned short _subjectRectHistoryHeadIdx;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _subjectRectHistoryUpdateTime;
    BOOL _subjectRectStationary;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _subjectRectStationaryTime;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _driftStartDeadband;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _driftStartTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _driftEndTime;
    BOOL _recenterOnNextFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _recenterStartDeadband;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _recenterStartTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _recenterEndTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _returningHomeStartTime;
    void /* unknown type, empty encoding */ _returningHomeStartRect;
    void /* unknown type, empty encoding */ _returningHomeTargetRect;
    struct { float viewportOffsetX; float viewportOffsetY; float viewportScale; } _newsroomFramingParameters;
    struct { float eyeBoxBottomInset; float eyeBoxHorizontalPadding; float headBoxPadding; float circleSize; } _floatingFramingParameters;
    CinematicTrack *_trackForFloating;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetViewportForFloating;
}

@property (retain, nonatomic) CinematicFramingSessionOptions *options;
@property (retain, nonatomic) CinematicFramingSessionFramingParameters *activeFramingParameters;
@property (nonatomic) int framingStyle;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } defaultViewport;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } targetViewport;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } idealViewport;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } slackViewport;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } deadband;

- (void)reset;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })applyNewsroomViewportAdjustments:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateBaselineViewportForTracks:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateSubjectEnclosingRectangleForTracks:(id)a0 withBaselineWidth:(float)a1 currentViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateViewportCenteredAround:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withWidth:(float)a1;
- (float)calculateViewportWidthToFitSubjectsInDeadband:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clearSubjectHistory;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeCroppedSubjectEnclosingRectForViewportWidth:(float)a0 subjectEnclosingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeDeadbandFromViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)computeDeadbandHeightForWidth:(float)a0;
- (float)computeDeadbandHeightFromViewportHeight:(float)a0;
- (float)computeDeadbandWidthForHeight:(float)a0;
- (float)computeDeadbandWidthFromViewportWidth:(float)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeViewportFromDeadband:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)computeViewportWidthFromDeadbandWidth:(float)a0;
- (float)defaultScreenWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })determineDeadbandForSubjectEnclosingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 oldDeadband:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 newDeadbandWidth:(float)a2;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; })determineSceneSummaryForTracks:(id)a0 currentViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)determineTemporallyStableTargetViewportForTracks:(id)a0 currentViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)initWithFramingSpaceManager:(id)a0;
- (BOOL)isCurrentFramingIdeal:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTolerance:(float)a1;
- (BOOL)isSubjectRectStationary:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)minAllowedDeadbandWidth;
- (float)minAllowedScreenWidth;
- (void)restoreDefaultViewportFromCurrentViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)transitionToFramingState:(unsigned short)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })undoNewsroomViewportAdjustments:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateDeadbandToFitScene:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; })a0 tracks:(id)a1 currentViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)updateDeadbandWithSubjectRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)updateSubjectMovement:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)updateTargetViewportForFloatingWithTracks:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)updateTargetViewportWithTracks:(id)a0 currentViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

@end
