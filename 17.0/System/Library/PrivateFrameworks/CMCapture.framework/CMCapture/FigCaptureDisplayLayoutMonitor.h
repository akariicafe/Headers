@class FBSDisplayLayoutMonitor, NSArray, FigCaptureDisplayLayout, SBSExternalDisplayService, NSMutableArray;

@interface FigCaptureDisplayLayoutMonitor : NSObject {
    struct OpaqueFigSimpleMutex { } *_layoutObserversLock;
    NSMutableArray *_layoutObservers;
    struct OpaqueFigSimpleMutex { } *_layoutLock;
    FigCaptureDisplayLayout *_layout;
    NSArray *_elementIdentifiersToIgnore;
    FBSDisplayLayoutMonitor *_layoutMonitor;
    SBSExternalDisplayService *_externalDisplayService;
}

@property (readonly, nonatomic) long long displayType;
@property (readonly, nonatomic, getter=isOnHomeScreen) BOOL onHomeScreen;
@property (readonly, nonatomic, getter=isOnLockScreen) BOOL onLockScreen;

+ (void)initialize;
+ (id)sharedExternalDisplayLayoutMonitor;
+ (id)sharedDisplayLayoutMonitor;

- (void)dealloc;
- (id)description;
- (void)externalDisplayDidConnect:(id)a0;
- (void)addLayoutObserver:(id)a0;
- (void)externalDisplayWillDisconnect:(id)a0;
- (id)debugDescription;
- (void)removeLayoutObserver:(id)a0;
- (id)initWithFBSDisplayLayoutMonitorCreateFunction:(void /* function */ *)a0 displayType:(long long)a1;

@end
