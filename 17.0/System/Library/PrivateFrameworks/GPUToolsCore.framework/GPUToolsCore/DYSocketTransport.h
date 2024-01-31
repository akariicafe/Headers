@interface DYSocketTransport : DYBaseSocketTransport {
    int _socket;
}

- (id)init;
- (id)connect;
- (id)initWithSocketDescriptor:(int)a0;

@end
