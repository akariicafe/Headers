@interface IDSNWPathUtils : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (BOOL)filterVirtualInterfaces:(char *)a0;
- (id)getDefaultPath;
- (BOOL)isVoWiFiInterface:(char *)a0;

@end
