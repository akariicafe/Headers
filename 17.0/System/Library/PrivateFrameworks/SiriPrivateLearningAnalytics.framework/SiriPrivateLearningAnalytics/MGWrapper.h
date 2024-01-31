@interface MGWrapper : NSObject

+ (id)sharedMGWrapper;

- (id)deviceClass;
- (BOOL)isDeviceIPad;
- (BOOL)isDeviceIPhone;

@end
