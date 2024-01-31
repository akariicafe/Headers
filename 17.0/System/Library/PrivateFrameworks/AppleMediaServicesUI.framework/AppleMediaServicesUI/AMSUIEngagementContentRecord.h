@class NSString, NSURL;

@interface AMSUIEngagementContentRecord : NSObject {
    void /* unknown type, empty encoding */ app;
    void /* unknown type, empty encoding */ cacheKey;
    void /* unknown type, empty encoding */ contentExtension;
    void /* unknown type, empty encoding */ fallbackURL;
    void /* unknown type, empty encoding */ version;
}

@property (nonatomic, readonly) NSString *app;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) NSString *contentExtension;
@property (nonatomic, readonly) NSURL *fallbackURL;
@property (nonatomic, readonly) NSString *version;

+ (BOOL)isURLEngagementContent:(id)a0;

- (id)initWithURL:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
