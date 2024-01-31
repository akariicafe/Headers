@class NSString, SABundleManagerApp;

@interface SAAuthorizationInFlight : NSObject

@property (nonatomic, getter=isInFlight) BOOL inFlight;
@property (nonatomic) long long preflightAuthorizationStatus;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSString *fromBundleId;
@property (retain, nonatomic) SABundleManagerApp *fromApp;
@property (retain, nonatomic) NSString *toBundleId;
@property (readonly, nonatomic, getter=getToBundleLocalizedName) NSString *toBundleLocalizedName;
@property (readonly, nonatomic, getter=getFromBundleLocalizedName) NSString *fromBundleLocalizedName;

+ (id)sharedInstance;

- (void)reset;
- (id)description;
- (void).cxx_destruct;
- (void)getFromBundleLocalizedNameWithCompletion:(id /* block */)a0;

@end
