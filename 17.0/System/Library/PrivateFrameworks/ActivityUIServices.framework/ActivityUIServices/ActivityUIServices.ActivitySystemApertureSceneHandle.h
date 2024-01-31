@interface ActivityUIServices.ActivitySystemApertureSceneHandle : NSObject <FBSceneDelegate, BSInvalidatable> {
    void /* unknown type, empty encoding */ invalidated;
    void /* unknown type, empty encoding */ activityDescriptor;
    void /* unknown type, empty encoding */ systemMetricsRequest;
    void /* unknown type, empty encoding */ processResource;
    void /* unknown type, empty encoding */ logIdentifier;
    void /* unknown type, empty encoding */ currentContentPayloadID;
    void /* unknown type, empty encoding */ backOffTimer;
    void /* unknown type, empty encoding */ settingsDiffInspector;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ scene;
@property (nonatomic, retain) void /* unknown type, empty encoding */ descriptor;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (void)sceneDidInvalidate:(id)a0;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)sceneDidDeactivate:(id)a0 withError:(id)a1;
- (void)sceneDidActivate:(id)a0;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithAcActivityDescritor:(id)a0 systemMetricsRequest:(id)a1;

@end
