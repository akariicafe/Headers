@class MFMessageBody, MFMutableMessageHeaders;

@interface MFOutgoingMessage : MFMailMessage {
    MFMessageBody *_messageBody;
    MFMutableMessageHeaders *_messageHeaders;
}

- (id)messageStore;
- (unsigned long long)messageSize;
- (void)dealloc;
- (id)headers;
- (id)messageBody;
- (id)messageData;
- (void)setMessageBody:(id)a0;
- (id)headersIfAvailable;
- (id)messageBodyIfAvailable;
- (BOOL)messageData:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (id)messageDataHolder;
- (BOOL)messageDataHolder:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (id)mutableHeaders;
- (void)setMutableHeaders:(id)a0;

@end
