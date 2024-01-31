@class NSData, MFMessageHeaders;

@interface MFIMAPMessageWithCache : MFIMAPMessage {
    NSData *_messageData;
    MFMessageHeaders *_headers;
}

- (void)dealloc;
- (void)setHeaders:(id)a0;
- (id)headers;
- (id)messageData;
- (id)headerData;
- (id)headersIfAvailable;
- (BOOL)isMessageContentsLocallyAvailable;
- (void)setMessageData:(id)a0 isPartial:(BOOL)a1;

@end
