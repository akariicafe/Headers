@class AFKEndpointInterface, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface CBAPEndpoint : NSObject {
    AFKEndpointInterface *_endpoint;
    NSObject<OS_dispatch_queue> *_epQueue;
    unsigned int _service;
    NSObject<OS_os_log> *_logHandle;
}

- (BOOL)setProperty:(id)a0 property:(id)a1;
- (void)dealloc;
- (id)copyProperty:(id)a0;
- (BOOL)enqueueCommandSync:(int)a0 inputBuffer:(const void *)a1 inputBufferSize:(unsigned long long)a2 responseObj:(id *)a3 options:(unsigned int)a4;
- (unsigned int)findDCPServiceWithName:(id)a0 role:(id)a1;
- (id)initWithServiceName:(id)a0 role:(id)a1;
- (BOOL)sendCommand:(int)a0 inputBuffer:(const void *)a1 inputBufferSize:(unsigned long long)a2;
- (BOOL)sendOOBCommand:(int)a0 inputBuffer:(const void *)a1 inputBufferSize:(unsigned long long)a2;

@end
