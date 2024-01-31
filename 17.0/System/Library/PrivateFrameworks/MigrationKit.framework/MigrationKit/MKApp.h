@class NSString;

@interface MKApp : NSObject

@property (nonatomic) BOOL isFree;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *appStoreIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *developer;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *iconURLForiPhone3x;
@property (copy, nonatomic) NSString *iconURLForiPhone2x;
@property (copy, nonatomic) NSString *iconURLForiPadPro;
@property (copy, nonatomic) NSString *iconURLForiPad;
@property (copy, nonatomic) NSString *iconURLForAppStore;

- (id)initWithJSONData:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 appStoreIdentifier:(id)a1 isFree:(BOOL)a2;

@end
