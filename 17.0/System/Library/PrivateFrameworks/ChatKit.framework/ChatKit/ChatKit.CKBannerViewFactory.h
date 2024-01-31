@interface ChatKit.CKBannerViewFactory : NSObject

+ (id)bannerWithTitle:(id)a0 subtitleString:(id)a1 avatarImages:(id)a2 contacts:(id)a3 customImage:(id)a4 actionButtonObjects:(id)a5 forceImageCentering:(BOOL)a6 xButtonHandler:(id /* block */)a7;
+ (id)unexpectedlyLoggedOutBanner;

- (id)init;

@end
