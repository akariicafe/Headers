@interface DTXMessageTransmitter : NSObject

@property unsigned int suggestedFragmentSize;

- (unsigned int)fragmentsForLength:(unsigned long long)a0;
- (void)transmitMessage:(id)a0 routingInfo:(struct DTXMessageRoutingInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned char x3 : 1; unsigned int x4 : 31; })a1 fragment:(unsigned int)a2 transmitter:(id /* block */)a3;

@end
