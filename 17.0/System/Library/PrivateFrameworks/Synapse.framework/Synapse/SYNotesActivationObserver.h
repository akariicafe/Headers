@class FBSDisplayLayoutMonitor;

@interface SYNotesActivationObserver : NSObject

@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) BOOL hasInitialVisibility;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleFrame;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *_displayLayoutMonitor;

- (void)dealloc;
- (id)initWithHandler:(id /* block */)a0;
- (void)_notifyHandlerOfVisibility;
- (void).cxx_destruct;
- (void)_updateNotesVisibilityFromLayout:(id)a0;
- (void)startObservingNotes;
- (void)_startObservingNotes;

@end
