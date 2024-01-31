@class NSString;

@interface FBSMutableSceneSettings : FBSSceneSettings <FBSMutableSettings>

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) double level;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, getter=isForeground) BOOL foreground;
@property (nonatomic, getter=isBackgrounded) BOOL backgrounded;
@property (nonatomic) long long interruptionPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transientLocalSettings;
- (id)ignoreOcclusionReasons;

@end
