@class TVRDevice;

@interface PauseContentIntent : INIntent

@property (copy, nonatomic) TVRDevice *device;
@property (nonatomic) long long mediaCommand;

@end
