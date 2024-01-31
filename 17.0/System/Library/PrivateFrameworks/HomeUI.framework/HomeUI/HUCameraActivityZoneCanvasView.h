@class UIImageView, NSMutableArray, HMPoint;
@protocol HUCameraActivityZoneCanvasDelegate;

@interface HUCameraActivityZoneCanvasView : UIView

@property (retain, nonatomic) NSMutableArray *currentActivityZone;
@property (retain, nonatomic) UIImageView *canvasView;
@property (nonatomic) long long currentTouchPointIndex;
@property (nonatomic, getter=isEditingActivityZone) BOOL editingActivityZone;
@property (retain, nonatomic) HMPoint *startingTouchPoint;
@property (weak, nonatomic) id<HUCameraActivityZoneCanvasDelegate> delegate;
@property (readonly, nonatomic) NSMutableArray *activityZones;
@property (nonatomic) BOOL displaysInclusionZones;
@property (readonly, nonatomic) BOOL isCreatingActivityZone;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didTap:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)didPan:(id)a0;
- (void)_addTouchpointAtPoint:(struct CGPoint { double x0; double x1; })a0 inContext:(struct CGContext { } *)a1 withRed:(double)a2 green:(double)a3 blue:(double)a4;
- (void)_displayMenuForActivityZone:(id)a0;
- (void)_drawPolygonWithMaskPath:(id)a0;
- (void)_drawTouchPoints;
- (void)_editActivityZone:(id)a0;
- (void)_finishEditingCurrentActivityZone;
- (void)_handleBeginForGesture:(id)a0;
- (void)_handleChangeForGesture:(id)a0;
- (void)_handleEndForGesture:(id)a0;
- (id)_hmPointForTapPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_hmPointToCGPoint:(id)a0;
- (struct CGPoint { double x0; double x1; })_normalizedPointForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_prepCurrentActivityZoneForDeselection;
- (void)_resetCanvasAndCurrentZone;
- (id)activityZoneContainingPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)canCreateActivityZone;
- (void)clearActivityZone;
- (void)createActivityZone;
- (BOOL)currentZonesIntersectPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)currentZonesIntersectSegmentFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)isValidPointInView:(struct CGPoint { double x0; double x1; })a0;
- (void)loadActivityZones:(id)a0;
- (void)preventAttemptToMovePoint;
- (id)selectedActivityZoneAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateAfterVideoBoundsChange;

@end
