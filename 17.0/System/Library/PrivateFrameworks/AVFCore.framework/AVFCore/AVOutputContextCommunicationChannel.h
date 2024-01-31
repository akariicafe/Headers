@class AVOutputContextCommunicationChannelInternal;
@protocol AVOutputContextCommunicationChannelImpl;

@interface AVOutputContextCommunicationChannel : NSObject {
    AVOutputContextCommunicationChannelInternal *_ivars;
}

@property (readonly, nonatomic) struct __CFString { } *commChannelUUID;
@property (readonly, nonatomic) id<AVOutputContextCommunicationChannelImpl> impl;

- (id)init;
- (void)dealloc;
- (id)initWithOutputContextCommunicationChannelImpl:(id)a0;
- (void)sendData:(id)a0 completionHandler:(id /* block */)a1;

@end
