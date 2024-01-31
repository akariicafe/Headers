@class NSString, NSURL;

@interface GEOAppStoreAppClip : NSObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSURL *appClipURL;
@property (retain, nonatomic) NSURL *artworkURL;
@property (readonly, nonatomic) NSString *provider;
@property (readonly, nonatomic) NSString *appShortName;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 title:(id)a1 subtitle:(id)a2 appShortName:(id)a3 appClipURL:(id)a4 artworkURL:(id)a5 providerName:(id)a6;

@end
