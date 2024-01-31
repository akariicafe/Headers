@class NSString, HMDDataStreamStreamProtocol, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, HMDDataStreamSocketDelegate;

@interface HMDDataStreamSocket : NSObject <HMFLogging, HMDDataStreamSocketPrivate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak) HMDDataStreamStreamProtocol *streamProtocol;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, getter=isClosing) BOOL closing;
@property (nonatomic, getter=isClosed) BOOL closed;
@property (readonly) NSMutableArray *pendingReads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDDataStreamSocketDelegate> delegate;
@property (readonly) NSString *applicationProtocolName;
@property unsigned long long trafficClass;

+ (id)logCategory;

- (void)close;
- (BOOL)writeData:(id)a0 error:(id *)a1;
- (void)closeWithError:(id)a0;
- (id)readData;
- (void).cxx_destruct;
- (void)writeData:(id)a0 completion:(id /* block */)a1;
- (void)_writeData:(id)a0 completion:(id /* block */)a1;
- (void)closeInitiated;
- (void)handleIncomingData:(id)a0;
- (id)initWithStreamProtocol:(id)a0 applicationProtocolName:(id)a1 workQueue:(id)a2;

@end
