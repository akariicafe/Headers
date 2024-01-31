@class AMSLookupItem, NSString, NSArray, NSURL;

@interface WLKLookupBasedInstallable : NSObject <WLKInstallable>

@property (readonly, nonatomic) AMSLookupItem *item;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *appBundleIDs;
@property (readonly, copy, nonatomic) NSArray *appAdamIDs;
@property (readonly, copy, nonatomic) NSURL *appStoreURL;
@property (readonly, nonatomic) BOOL forceDSIDlessInstall;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLookupItem:(id)a0;
- (id)appIconURLForSize:(struct CGSize { double x0; double x1; })a0;

@end
