@class AVInternalDeviceList;

@interface AVAudioDeviceList : NSObject {
    AVInternalDeviceList *_internalList;
}

@property (copy, nonatomic) id /* block */ changeListener;

+ (id)defaultInputDevice;
+ (id)currentInputDevice;
+ (id)defaultOutputDevice;
+ (BOOL)setInputDevice:(id)a0;
+ (id)deviceForDeviceID:(unsigned int)a0;
+ (id)deviceForUID:(id)a0;

- (id)init;
- (id)inputDevices;
- (void)dealloc;
- (id)outputDevices;
- (id)devices;

@end
