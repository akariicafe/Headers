@class UIWindow, NSMapTable;

@interface _UIFeedbackVisualizer : NSObject

@property (retain, nonatomic) UIWindow *visualFeedbackWindow;
@property (retain, nonatomic) NSMapTable *engineLayers;

+ (id)sharedVisualizer;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)_colorForEngine:(id)a0;
- (id)_colorForEngineState:(long long)a0;
- (id)_colorForFeedback:(id)a0;
- (id)_monogramForEngine:(id)a0;
- (void)_showVisualForFeedback:(id)a0;
- (void)_updateEngine:(id)a0;
- (void)addEngine:(id)a0;
- (void)cancelVisualForFeedback:(id)a0;
- (void)showVisualForFeedback:(id)a0 withDelay:(double)a1;

@end
