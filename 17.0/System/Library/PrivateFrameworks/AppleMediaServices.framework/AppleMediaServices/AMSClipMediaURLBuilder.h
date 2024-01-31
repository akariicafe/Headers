@class NSString, NSNumber;
@protocol AMSBagProtocol;

@interface AMSClipMediaURLBuilder : NSObject

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *externalVersionID;

- (id)build;
- (void).cxx_destruct;
- (id)_devicePlatform;
- (id)_hostPromise;
- (id)_pathPromise;
- (id)_queryPromise;
- (id)initWithBundleID:(id)a0 bag:(id)a1;

@end
