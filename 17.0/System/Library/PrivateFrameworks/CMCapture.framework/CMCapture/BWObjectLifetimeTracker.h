@interface BWObjectLifetimeTracker : NSObject {
    id /* block */ _deallocHandler;
}

+ (void)trackAttachmentBearer:(void *)a0 deallocHandler:(id /* block */)a1;
+ (id)trackerWithDeallocHandler:(id /* block */)a0;

- (void)dealloc;

@end
