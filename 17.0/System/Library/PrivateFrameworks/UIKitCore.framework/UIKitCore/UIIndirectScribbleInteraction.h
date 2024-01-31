@class NSString, UIView;
@protocol UIIndirectScribbleInteractionDelegate;

@interface UIIndirectScribbleInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction> {
    long long __handlingWritingCount;
}

@property (weak, nonatomic) UIView *view;
@property (nonatomic, getter=isHandlingWriting, setter=_setHandlingWriting:) BOOL handlingWriting;
@property (readonly, nonatomic, getter=_isDefaultSystemInteraction) BOOL _defaultSystemInteraction;
@property (readonly, weak, nonatomic) id<UIIndirectScribbleInteractionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)scribbleInteractionWrapper;
- (void)didMoveToView:(id)a0;
- (void)_setDefaultSystemInteraction:(BOOL)a0;
- (void)_setHandlingWritingCount:(long long)a0;
- (void)willMoveToView:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (long long)_handlingWritingCount;

@end
