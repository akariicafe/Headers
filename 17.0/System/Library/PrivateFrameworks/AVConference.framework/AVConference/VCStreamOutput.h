@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VCStreamOutput : VCObject <VCRemoteVideoManagerStreamOutputDelegate> {
    struct opaqueVCRemoteImageQueue { } *_remoteQueue;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    int _clientProcessID;
    struct __CFDictionary { } *_attributes;
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _useFigRemoteQueue;
}

@property (readonly, nonatomic) long long streamToken;
@property (readonly) BOOL isClientInProcess;
@property (readonly) struct __CFAllocator { } *backingBufferAllocator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSuspend:(BOOL)a0;
- (int)processID;
- (void)dealloc;
- (void)didInvalidate;
- (void)invalidate;
- (id)copyXpcSenderQueue;
- (BOOL)createRemoteQueue;
- (void)didDegrade:(BOOL)a0;
- (void)didPause:(BOOL)a0;
- (void)didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)didStall:(BOOL)a0;
- (void)didUpdateAttachments:(struct __CFDictionary { } *)a0;
- (id)initWithStreamToken:(long long)a0 clientProcessID:(int)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (BOOL)initXPCCommandQueue;

@end
