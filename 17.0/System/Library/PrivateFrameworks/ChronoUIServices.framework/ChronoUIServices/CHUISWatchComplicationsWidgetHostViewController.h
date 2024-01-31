@class CHSWatchComplicationsCurvedLabelMetrics, CHUISWatchComplicationsWidgetSceneClientSettingsDiffInspector, CHUISWatchComplicationsWidgetSnapshotMetadata;
@protocol CHUISWatchComplicationsWidgetHostViewControllerDelegate;

@interface CHUISWatchComplicationsWidgetHostViewController : CHUISWidgetHostViewController {
    CHUISWatchComplicationsWidgetSceneClientSettingsDiffInspector *_clientSettingsDiffInspector;
    CHUISWatchComplicationsWidgetSnapshotMetadata *_snapshotMetadata;
}

@property (weak, nonatomic) id<CHUISWatchComplicationsWidgetHostViewControllerDelegate> watchComplicationsDelegate;
@property (nonatomic) long long cornerPosition;
@property (copy, nonatomic) CHSWatchComplicationsCurvedLabelMetrics *curvedLabelMetrics;
@property (nonatomic) struct CGPoint { double x; double y; } bezelContentCenter;
@property (nonatomic) BOOL includeAccessoryViews;
@property (nonatomic) BOOL generateSnapshotMetadata;
@property (readonly, nonatomic) double curvedTextAngularWidth;
@property (readonly, copy, nonatomic) CHUISWatchComplicationsWidgetSnapshotMetadata *snapshotMetadata;

- (id)additionalSnapshotPresentationContext;
- (void)setPosition:(long long)a0;
- (long long)position;
- (id)sceneSpecification;
- (void).cxx_destruct;
- (id)initWithWidget:(id)a0 metrics:(id)a1 widgetConfigurationIdentifier:(id)a2;
- (id)handleActions:(id)a0;
- (void)prepareForSnapshotWithTimeout:(double)a0 completion:(id /* block */)a1;
- (void)sceneDidUpdateClientSettingsWithDiff:(id)a0 oldClientSettings:(id)a1 newClientSettings:(id)a2 transitionContext:(id)a3;
- (void)willModifySceneClientSettings:(id)a0;
- (void)willModifySceneSettings:(id)a0;

@end
