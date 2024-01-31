@class NSString, CSOpportuneSpeakListener, NSObject;
@protocol OS_dispatch_queue;

@interface CSOpportuneSpeakListnerTestService : NSObject <CSOpportuneSpeakListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
    CSOpportuneSpeakListener *listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)start;
- (void)opportuneSpeakListener:(id)a0 didStopUnexpectedly:(BOOL)a1;
- (void)opportuneSpeakListener:(id)a0 hasVADAvailable:(BOOL)a1;
- (void)opportuneSpeakListener:(id)a0 hasRemoteVADAvailable:(BOOL)a1;
- (void).cxx_destruct;
- (void)receiveOpportuneSpeakListenerStart;
- (void)receiveOpportuneSpeakListenerStop;

@end
