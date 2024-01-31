@class NSString, LSApplicationProxy;

@interface _LSAppToUnregister : NSObject {
    LSApplicationProxy *_proxy;
    NSString *_bundleIdentifier;
    BOOL _isPlaceholder;
}

- (void).cxx_destruct;

@end
