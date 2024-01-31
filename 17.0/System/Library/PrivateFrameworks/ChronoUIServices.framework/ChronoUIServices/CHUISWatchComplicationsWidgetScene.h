@class CHSWatchComplicationsCurvedLabelMetrics;

@interface CHUISWatchComplicationsWidgetScene : CHUISWidgetScene

@property (readonly, nonatomic) long long cornerPosition;
@property (readonly, copy, nonatomic) CHSWatchComplicationsCurvedLabelMetrics *curvedLabelMetrics;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } bezelContentCenter;
@property (readonly, nonatomic) BOOL includeAccessoryViews;
@property (readonly, nonatomic) BOOL generateSnapshotMetadata;

- (id)_sceneSettings;

@end
