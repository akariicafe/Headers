@interface _GCHIDEventIOKitClient : _GCHIDEventSubject {
    struct __IOHIDEventSystemClient { } *_ioClient;
}

- (id)init;
- (void)dealloc;
- (id)initWithClient:(struct __IOHIDEventSystemClient { } *)a0 queue:(id)a1;

@end
