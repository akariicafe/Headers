@class ACActivityDescriptor, NSString, _TtC18ActivityUIServices33ActivitySystemApertureSceneHandle, FBScene;
@protocol ACUISSystemApertureSceneHandleDelegate;

@interface ACUISSystemApertureSceneHandle : NSObject <ActivityUIServices.ActivitySystemApertureSceneHandleDelegate, BSInvalidatable>

@property (retain, nonatomic) _TtC18ActivityUIServices33ActivitySystemApertureSceneHandle *handle;
@property (weak, nonatomic) id<ACUISSystemApertureSceneHandleDelegate> delegate;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) ACActivityDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0 metricsRequest:(id)a1;
- (void)activitySystemApertureWithSceneHandle:(id)a0 requestsLaunchWithAction:(id)a1;
- (void)activitySystemApertureWithSceneHandle:(id)a0 updatedContentPayloadID:(id)a1;
- (id)initWithActivitySystemApertureSceneHandle:(id)a0;

@end
