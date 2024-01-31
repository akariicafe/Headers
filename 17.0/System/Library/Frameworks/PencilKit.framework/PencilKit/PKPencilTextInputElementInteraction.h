@class NSString, UIView;
@protocol PKPencilTextInputElementInteractionDelegate, PKScribbleInteractionWrapper;

@interface PKPencilTextInputElementInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction> {
    id<PKScribbleInteractionWrapper> _cachedWrapper;
}

@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) id<PKPencilTextInputElementInteractionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_pencilTextInputElementInteractionInView:(id)a0;

@end
