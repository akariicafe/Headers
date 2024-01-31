@interface BMWeakProxy : NSProxy {
    id _target;
}

+ (id)weakProxyToObject:(id)a0;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
