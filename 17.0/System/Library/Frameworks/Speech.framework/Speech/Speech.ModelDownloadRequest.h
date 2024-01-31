@interface Speech.ModelDownloadRequest : NSObject <NSProgressReporting> {
    void /* unknown type, empty encoding */ locales;
    void /* unknown type, empty encoding */ clientID;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ progress;

- (id)init;
- (void).cxx_destruct;
- (void)downloadWithCompletion:(id /* block */)a0;

@end
