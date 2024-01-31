@class NSUUID, NSData, NSRecursiveLock, IOUSBHostCIControllerStateMachine, IOUSBHostInterestNotifier, NSObject, IOUSBHostCIPortStateMachine, NSMutableData;
@protocol OS_dispatch_queue, OS_os_log;

@interface IOUSBHostControllerInterface : NSObject {
    NSData *_capabilitiesData;
    IOUSBHostCIPortStateMachine *_portStateMachine[16];
}

@property (retain, nonatomic) IOUSBHostCIControllerStateMachine *controllerStateMachine;
@property (nonatomic) const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *capabilities;
@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned int ioConnect;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct IONotificationPort { } *notificationPortRef;
@property (copy, nonatomic) id /* block */ commandHandler;
@property (copy, nonatomic) id /* block */ doorbellHandler;
@property (nonatomic) void /* function */ *interestHandler;
@property (retain, nonatomic) IOUSBHostInterestNotifier *interestNotifier;
@property struct IOUSBHostCIMessage { unsigned int control; unsigned int data0; unsigned long long data1; } command;
@property (retain, nonatomic) NSMutableData *doorbells;
@property (retain, nonatomic) NSMutableData *interrupts;
@property (retain, nonatomic) NSRecursiveLock *interruptLock;
@property unsigned long long interruptProducerIndex;
@property unsigned long long interruptConsumerIndex;
@property BOOL interruptDeliveryPending;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *interruptQueue;
@property unsigned long long nextInterruptTime;
@property BOOL destroyed;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned long long interruptRateHz;

- (void)dealloc;
- (void)destroy;
- (void).cxx_destruct;
- (const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)capabilitiesForPort:(unsigned long long)a0;
- (BOOL)commandAsyncCallbackWithResult:(int)a0 error:(id *)a1;
- (BOOL)deliverInterrupts;
- (id)descriptionForMessage:(const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0;
- (BOOL)doorbellAsyncCallbacKWithResult:(int)a0 length:(unsigned long long)a1 error:(id *)a2;
- (BOOL)enqueueInterrupt:(const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0 error:(id *)a1;
- (BOOL)enqueueInterrupt:(const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0 expedite:(BOOL)a1 error:(id *)a2;
- (BOOL)enqueueInterrupts:(const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0 count:(unsigned long long)a1 error:(id *)a2;
- (BOOL)enqueueInterrupts:(const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0 count:(unsigned long long)a1 expedite:(BOOL)a2 error:(id *)a3;
- (id)getPortStateMachineForCommand:(const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0 error:(id *)a1;
- (id)getPortStateMachineForPort:(unsigned long long)a0 error:(id *)a1;
- (id)initWithCapabilities:(id)a0 queue:(id)a1 interruptRateHz:(unsigned long long)a2 error:(id *)a3 commandHandler:(id /* block */)a4 doorbellHandler:(id /* block */)a5 interestHandler:(void /* function */ *)a6;

@end
