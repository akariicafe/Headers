@protocol AVOutputContextCommunicationChannelImpl;

@interface AVOutputContextCommunicationChannelInternal : NSObject {
    id<AVOutputContextCommunicationChannelImpl> impl;
}

@end
