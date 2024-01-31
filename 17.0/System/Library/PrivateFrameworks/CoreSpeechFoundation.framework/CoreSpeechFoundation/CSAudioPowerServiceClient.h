@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, CSAudioPowerServiceClientDelegate;

@interface CSAudioPowerServiceClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    id<CSAudioPowerServiceClientDelegate> _delegate;
    long long _frequency;
    NSXPCConnection *_xpcConnection;
}

+ (unsigned long long)_getTimeIntervalFromFrequency:(long long)a0;

- (void)_timerFired;
- (id)_connection;
- (id)_service;
- (void)_beginUpdate;
- (void)_invalidate;
- (void)invalidate;
- (id)_newConnection;
- (void).cxx_destruct;
- (void)_endUpdate;
- (void)endUpdate;
- (void)beginUpdate;
- (void)_fetchPowerLevels;
- (id)initWithQueue:(id)a0 frequency:(long long)a1 delegate:(id)a2;

@end
