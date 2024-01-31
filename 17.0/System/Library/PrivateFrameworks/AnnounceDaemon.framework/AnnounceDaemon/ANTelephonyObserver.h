@interface ANTelephonyObserver : NSObject {
    void /* unknown type, empty encoding */ logger;
}

@property (nonatomic, readonly) BOOL hasCalls;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
