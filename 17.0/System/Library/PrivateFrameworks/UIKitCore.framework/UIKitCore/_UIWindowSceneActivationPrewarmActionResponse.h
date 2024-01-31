@interface _UIWindowSceneActivationPrewarmActionResponse : BSActionResponse

@property (readonly, nonatomic) unsigned int sceneContainerContextId;
@property (readonly, nonatomic) unsigned long long sceneContainerRenderId;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sceneFrame;
@property (readonly, nonatomic) struct UIRectCornerRadii { double x0; double x1; double x2; double x3; } sceneCornerRadii;

+ (id)responseWithSceneContainer:(id)a0 expectedSceneFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })a2;

@end
