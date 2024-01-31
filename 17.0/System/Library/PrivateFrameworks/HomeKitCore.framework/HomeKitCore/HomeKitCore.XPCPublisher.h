@interface HomeKitCore.XPCPublisher : NSObject <HomeKitCore.XPCModelPublisherInterface> {
    void /* unknown type, empty encoding */ cancelationHandler;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;

@end
