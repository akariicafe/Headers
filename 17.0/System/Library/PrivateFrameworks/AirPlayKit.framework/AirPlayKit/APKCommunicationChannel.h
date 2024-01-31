@class NSString, AVOutputDeviceCommunicationChannel;

@interface APKCommunicationChannel : NSObject <APKOutputDeviceCommunicationChannel, AVOutputDeviceCommunicationChannelDelegate>

@property (copy, nonatomic) id /* block */ onData;
@property (copy, nonatomic) id /* block */ onClose;
@property (readonly, nonatomic) AVOutputDeviceCommunicationChannel *channel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void).cxx_destruct;
- (void)communicationChannel:(id)a0 didReceiveData:(id)a1;
- (void)communicationChannelDidClose:(id)a0;
- (void)sendData:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCommunicationChannel:(id)a0;

@end
