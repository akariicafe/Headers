@class TVRDevice, TVRApplication;

@interface LaunchApplicationIntent : INIntent

@property (copy, nonatomic) TVRDevice *device;
@property (copy, nonatomic) TVRApplication *application;

@end
