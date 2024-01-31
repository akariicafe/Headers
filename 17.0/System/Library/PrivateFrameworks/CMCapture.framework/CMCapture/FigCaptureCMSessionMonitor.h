@class FigCaptureCMSession;
@protocol FigCaptureCMSessionObserver;

@interface FigCaptureCMSessionMonitor : NSObject {
    struct OpaqueFigSimpleMutex { } *_lock;
    FigCaptureCMSession *_session;
    int _clientPID;
    id<FigCaptureCMSessionObserver> _observer;
    id _applicationStateChangeNotificationToken;
    id _interruptionStateChangeNotificationToken;
    BOOL _invalidated;
}

+ (void)initialize;

- (void)dealloc;
- (void)invalidate;
- (id)description;
- (id)debugDescription;
- (id)_initWithFigCaptureCMSession:(id)a0 clientPID:(int)a1 observer:(id)a2;
- (id)initWithCMSession:(struct opaqueCMSession { } *)a0 clientPID:(int)a1 observer:(id)a2;

@end
