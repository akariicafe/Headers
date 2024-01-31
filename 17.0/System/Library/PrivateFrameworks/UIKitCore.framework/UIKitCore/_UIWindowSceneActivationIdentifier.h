@class NSString, UIView;

@interface _UIWindowSceneActivationIdentifier : NSObject <_UIContentEffectKey>

@property (readonly, nonatomic) struct CGPoint { double x; double y; } location;
@property (readonly, weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierWithLocation:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;

@end
