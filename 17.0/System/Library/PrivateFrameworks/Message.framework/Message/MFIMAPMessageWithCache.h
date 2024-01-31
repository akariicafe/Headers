@class NSData, MFMessageHeaders;

@interface MFIMAPMessageWithCache : MFIMAPMessage {
    NSData *_messageData;
    MFMessageHeaders *_headers;
}

- (void)setHeaders:(id)a0;
- (void).cxx_destruct;
- (id)headers;
- (id)messageData;
- (id)headerData;
- (id)headersIfAvailable;
- (BOOL)isMessageContentsLocallyAvailable;
- (BOOL)messageDataHolder:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (void)setMessageData:(id)a0 isPartial:(BOOL)a1;

@end
