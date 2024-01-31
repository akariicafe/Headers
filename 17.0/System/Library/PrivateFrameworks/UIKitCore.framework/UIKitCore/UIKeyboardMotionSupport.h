@class UIScreen, NSString, NSDictionary, UIWindowScene;
@protocol UISplitKeyboardSource;

@interface UIKeyboardMotionSupport : NSObject <_UIScreenBasedObject> {
    UIScreen *_screen;
    UIWindowScene *_canvas;
    id<UISplitKeyboardSource> _controller;
}

@property (weak, nonatomic) id<UISplitKeyboardSource> masterController;
@property (readonly) UIScreen *_intendedScreen;
@property (readonly) NSDictionary *_options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportForScreen:(id)a0;
+ (id)supportForUIScene:(id)a0;

- (id)_initWithCanvas:(id)a0 options:(id)a1;
- (id)_intendedCanvas;
- (BOOL)_matchingOptions:(id)a0;
- (void).cxx_destruct;
- (id)_initWithScreen:(id)a0 options:(id)a1;
- (void)_connectController:(id)a0;
- (void)_disconnectingController:(id)a0;
- (void)_updatedController;
- (BOOL)generateSplitNotificationForNewPlacement:(id)a0;
- (void)translateToPlacement:(id)a0 animated:(BOOL)a1;
- (void)translateToPlacement:(id)a0 quietly:(BOOL)a1 animated:(BOOL)a2;

@end
