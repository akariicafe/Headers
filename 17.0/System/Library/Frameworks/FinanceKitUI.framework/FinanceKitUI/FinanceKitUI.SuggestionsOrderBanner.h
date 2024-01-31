@class NSString, UIImage, NSURL, NSAttributedString;

@interface FinanceKitUI.SuggestionsOrderBanner : NSObject {
    void /* unknown type, empty encoding */ orderBundle;
    void /* unknown type, empty encoding */ order;
    void /* unknown type, empty encoding */ configuration;
}

@property (nonatomic, readonly) NSString *merchantName;
@property (nonatomic, readonly) UIImage *merchantLogo;
@property (nonatomic, readonly) NSURL *orderDeepLink;
@property (nonatomic, readonly) NSAttributedString *bannerAttributedSubtitle;

+ (id)walletLogo;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init:(id)a0 error:(id *)a1;

@end
