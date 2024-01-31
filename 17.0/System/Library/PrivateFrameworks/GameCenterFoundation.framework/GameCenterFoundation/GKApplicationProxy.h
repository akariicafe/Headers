@class NSBundle, NSDictionary, NSString, LSApplicationProxy, NSNumber, NSDate;

@interface GKApplicationProxy : NSObject

@property (retain, nonatomic) LSApplicationProxy *lsProxy;
@property (retain, nonatomic) NSDictionary *metadata;
@property (readonly, retain, nonatomic) NSBundle *bundle;
@property (readonly, retain, nonatomic) NSString *bundleVersion;
@property (readonly, retain, nonatomic) NSString *bundleShortVersion;
@property (readonly, retain, nonatomic) NSString *bundleID;
@property (readonly, retain, nonatomic) NSNumber *adamID;
@property (readonly, retain, nonatomic) NSNumber *externalVersion;
@property (readonly, retain, nonatomic) NSDate *purchaseDate;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (readonly, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled;
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;

+ (id)metadataForBundleURL:(id)a0;

- (id)initWithBundleID:(id)a0;
- (id)initWithProxy:(id)a0;
- (void).cxx_destruct;
- (id)bundleURL;

@end
