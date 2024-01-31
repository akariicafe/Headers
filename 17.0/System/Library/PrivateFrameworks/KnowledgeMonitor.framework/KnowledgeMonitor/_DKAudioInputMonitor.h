@class BMSource, AVAudioSession;

@interface _DKAudioInputMonitor : _DKMonitor {
    BMSource *_source;
    AVAudioSession *_inputMonitor;
}

+ (id)eventStream;
+ (id)_eventWithState:(id)a0 type:(id)a1 name:(id)a2 identifier:(id)a3 routeChangeReason:(id)a4;
+ (id)_BMEventWithState:(id)a0 type:(id)a1 name:(id)a2 identifier:(id)a3 routeChangeReason:(id)a4;
+ (id)entitlement;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)onAudioRouteChangeNotification:(id)a0;
- (void)deactivate;

@end
