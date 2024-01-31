@interface _LTRateLimiter : NSObject {
    unsigned long long _count;
    BOOL _pageLoaded;
}

@property (nonatomic) unsigned long long maximumPageLoadRequests;
@property (nonatomic) unsigned long long maximumDynamicContentRequests;

- (void)markPageLoaded;
- (BOOL)allowedForRequests:(unsigned long long)a0;
- (id)initWithMaximumPageLoadRequest:(unsigned long long)a0 maximumDynamicContentRequests:(long long)a1;

@end
