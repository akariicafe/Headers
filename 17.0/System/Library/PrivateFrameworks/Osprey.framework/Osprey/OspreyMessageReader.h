@class NSMutableData;

@interface OspreyMessageReader : NSObject {
    id /* block */ _messageHandler;
    unsigned long long _readerState;
    unsigned long long _messageSequence;
    BOOL _currentMessageCompressed;
    unsigned long long _currentMessageSize;
    NSMutableData *_messageBuffer;
}

- (void).cxx_destruct;
- (void)readData:(id)a0;
- (void)_produceMessageBody:(id)a0;
- (id)initWithMessageHandler:(id /* block */)a0;

@end
