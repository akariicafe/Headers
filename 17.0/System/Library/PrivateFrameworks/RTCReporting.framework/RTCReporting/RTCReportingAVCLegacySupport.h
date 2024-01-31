@class NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface RTCReportingAVCLegacySupport : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQ;
    NSObject<OS_os_log> *_logger;
}

@property (readonly, nonatomic) id awdAdaptor;

- (id)init;
- (void)dealloc;
- (void)invokeAWDAdaptorForPayload:(id)a0 category:(unsigned short)a1 type:(unsigned short)a2;
- (void)sendPowerLogEventForClient:(id)a0 serviceName:(id)a1 payload:(id)a2 category:(unsigned short)a3 type:(unsigned short)a4 eventNumber:(unsigned long long)a5;

@end
