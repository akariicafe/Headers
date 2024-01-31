@interface TKDisplayLinkManagerObserver : NSObject {
    id /* block */ _block;
    unsigned long long _frameInterval;
    unsigned long long _displayDidRefreshCount;
}

- (id)initWithBlock:(id /* block */)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)displayDidRefresh:(id)a0;
- (id)initWithBlock:(id /* block */)a0 frameInterval:(unsigned long long)a1;

@end
