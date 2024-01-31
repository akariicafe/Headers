@class NSString;

@interface FBSExtensionInfo : FBSBundleInfo

@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, copy, nonatomic) NSString *extensionIdentifier;

- (void).cxx_destruct;
- (id)_initWithBundleIdentifier:(id)a0 url:(id)a1;
- (id)_initWithBundleProxy:(id)a0 url:(id)a1;
- (id)_initWithPlugInKitProxy:(id)a0;

@end
