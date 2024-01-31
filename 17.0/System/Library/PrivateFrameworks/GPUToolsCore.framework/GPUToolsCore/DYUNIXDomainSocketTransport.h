@class NSURL, NSObject;
@protocol OS_dispatch_source;

@interface DYUNIXDomainSocketTransport : DYBaseSocketTransport {
    int _mode;
    NSObject<OS_dispatch_source> *_connSource;
}

@property (retain, nonatomic) NSURL *url;

- (void)_invalidate;
- (id)initWithMode:(int)a0;
- (id)connect;
- (void)setUrl:(id)a0;
- (void)_connectClient:(id)a0 future:(id)a1;
- (void)_connectServer:(id)a0 future:(id)a1;

@end
