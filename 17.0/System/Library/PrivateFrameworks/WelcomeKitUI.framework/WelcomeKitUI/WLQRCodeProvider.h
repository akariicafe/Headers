@class NSString, WLRequest, NSMutableArray;
@protocol WLQRCodeProviderDelegate;

@interface WLQRCodeProvider : NSObject <WLRequestDelegate> {
    WLRequest *_request;
    NSMutableArray *_urls;
    NSMutableArray *_codes;
}

@property (weak, nonatomic) id<WLQRCodeProviderDelegate> delegate;
@property (nonatomic) BOOL useGooglePlayStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)complete;
- (void)requestDidFinish:(BOOL)a0;
- (void)request;
- (void).cxx_destruct;
- (void)drainQueue;

@end
