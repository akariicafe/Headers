@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSCrownPressSelfLoggerWatch : NSObject <CSSiriClientBehaviorMonitorDelegate, CSSiriAssertionMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long displayWakeHostTime;
@property (nonatomic) BOOL listeningEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3 withEventUUID:(id)a4;
- (void).cxx_destruct;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)setup;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;
- (void)CSSiriAssertionMonitor:(id)a0 didReceiveBacklightOnEnabled:(BOOL)a1 atHostTime:(unsigned long long)a2;
- (void)_emitCrownPressedEventwithMHUUID:(id)a0 didUseAOM:(BOOL)a1;
- (void)_handleDidStartStreamWithContext:(id)a0 withOption:(id)a1 successfully:(BOOL)a2;

@end
