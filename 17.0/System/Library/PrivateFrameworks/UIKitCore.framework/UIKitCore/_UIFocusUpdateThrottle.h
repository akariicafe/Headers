@class NSTimer;

@interface _UIFocusUpdateThrottle : NSObject {
    unsigned long long _nilUpdateCount;
    double _lastUpdate;
    double _currentTimeout;
    BOOL _updateIsScheduled;
    NSTimer *_updateTimer;
    id /* block */ _updateHandler;
}

- (void)teardown;
- (void).cxx_destruct;
- (id)initWithUpdateHandler:(id /* block */)a0;
- (void)scheduleProgrammaticFocusUpdate;
- (void)_performScheduledUpdate;
- (void)didCreateProgrammaticFocusUpdateContext:(id)a0;

@end
