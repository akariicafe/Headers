@class BMSource, AVAudioSession;

@interface _DKAudioOutputMonitor : _DKMonitor {
    AVAudioSession *_outputMonitor;
    BMSource *_source;
}

+ (id)eventStream;
+ (id)entitlements;
+ (id)contextValueForAudioOutputConnectionStatus:(BOOL)a0 type:(id)a1 name:(id)a2 identifier:(id)a3 routeChangeReason:(id)a4;
+ (id)_eventWithState:(id)a0 type:(id)a1 name:(id)a2 identifier:(id)a3 routeChangeReason:(id)a4;
+ (id)_BMEventWithState:(id)a0 type:(id)a1 name:(id)a2 identifier:(id)a3 routeChangeReason:(id)a4;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)onAudioRouteChangeNotification:(id)a0;
- (void)deactivate;

@end
