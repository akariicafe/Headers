@class DYTransportMessage, NSObject;
@protocol OS_dispatch_queue;

@interface BufferedSendOperation : NSObject

@property (retain, nonatomic) DYTransportMessage *message;
@property (retain, nonatomic) DYTransportMessage *replyTo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long timeout;
@property (copy, nonatomic) id /* block */ replyBlock;

- (void)dealloc;

@end
