@class NSString;

@interface TLSystemApplication : NSObject

@property (class, readonly) TLSystemApplication *defaultSystemApplication;

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *name;

- (id)initWithBundleIdentifier:(id)a0 name:(id)a1;
- (void).cxx_destruct;

@end
