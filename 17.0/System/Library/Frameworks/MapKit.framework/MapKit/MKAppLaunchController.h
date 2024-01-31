@class NSURL, NSString;

@interface MKAppLaunchController : NSObject {
    NSString *_webURLString;
}

@property (retain, nonatomic) NSURL *webURL;

+ (id)sharedController;
+ (void)launchAttributionURLs:(id)a0 withAttribution:(id)a1 completionHandler:(id /* block */)a2;
+ (void)launchAttributionURLs:(id)a0 withAttribution:(id)a1 usingTarget:(int)a2 completionHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (void)lookUpAppStoreURLForBundle:(id)a0 usingTarget:(int)a1 completionHandler:(id /* block */)a2;

@end
