@class NSArray, NSString, UITargetedPreview;

@interface _UIWindowSceneActivationEffectDescriptor : NSObject <_UIContentEffectDescriptor>

@property (readonly, nonatomic) UITargetedPreview *targetedPreview;
@property (readonly, nonatomic) NSArray *compatibleDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorWithPreview:(id)a0;

- (void).cxx_destruct;
- (BOOL)canTransitionInPlaceToEffectWithDescriptor:(id)a0;

@end
