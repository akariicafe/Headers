@class NSArray, NSString, UITargetedPreview;

@interface _UIGravityWellEffectDescriptor : NSObject <_UIContentEffectDescriptor>

@property (retain, nonatomic) UITargetedPreview *primaryPreview;
@property (retain, nonatomic) NSArray *secondaryPreviews;
@property (readonly, nonatomic) UITargetedPreview *targetedPreview;
@property (readonly, nonatomic) NSArray *compatibleDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)canTransitionInPlaceToEffectWithDescriptor:(id)a0;

@end
