@class LPEvent, WKWebView;

@interface LPFetcherConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) WKWebView *webViewForProcessSharing;
@property (nonatomic) BOOL loadingIsNonAppInitiated;
@property (nonatomic) long long maximumResponseCount;
@property (retain, nonatomic) LPEvent *rootEvent;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
