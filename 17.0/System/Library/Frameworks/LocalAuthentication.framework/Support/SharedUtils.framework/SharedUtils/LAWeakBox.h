@interface LAWeakBox : NSObject {
    id _receiver;
}

- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithReceiver:(id)a0;

@end
