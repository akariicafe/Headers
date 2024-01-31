@interface NewsUI2.NewsAssetURLSchemeHandler : NSObject <SWURLSchemeHandler> {
    void /* unknown type, empty encoding */ assetFetchService;
    void /* unknown type, empty encoding */ resourceIdentifier;
    void /* unknown type, empty encoding */ cancelHandler;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ task;

- (id)init;
- (void)finish;
- (void)start;
- (void).cxx_destruct;
- (void)cancel;

@end
