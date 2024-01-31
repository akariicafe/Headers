@interface CODeviceClass : NSObject

+ (BOOL)isPad;
+ (BOOL)isAppleTV;
+ (int)deviceClass;
+ (BOOL)isAudioAccessory;
+ (BOOL)isPhone;

@end
