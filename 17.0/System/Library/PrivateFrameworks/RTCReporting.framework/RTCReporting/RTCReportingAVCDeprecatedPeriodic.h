@class RTCReporting, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RTCReportingAVCDeprecatedPeriodic : NSObject {
    int _counter;
    NSMutableDictionary *_periodicServiceDict;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_periodicTaskQueue;
    NSObject<OS_dispatch_source> *_timer;
    RTCReporting *_session;
}

- (id)initWithSession:(id)a0;
- (void)dealloc;
- (BOOL)unregisterPeriodTaskForModule:(unsigned int)a0;
- (void)stopLogTimer;
- (BOOL)registerPeriodicTaskForModule:(unsigned int)a0 needToUpdate:(BOOL)a1 needToReport:(BOOL)a2 serviceBlock:(id /* block */)a3;
- (void)startLogTimerWithInterval:(int)a0 reportingMultiplier:(int)a1 category:(unsigned short)a2 type:(unsigned short)a3;
- (void)_myPeriodicTask:(unsigned short)a0 type:(unsigned short)a1 intervalMultiplier:(int)a2 updateTimeout:(unsigned long long)a3;

@end
