@class NSString, AVPairedDeviceInternal;

@interface AVPairedDevice : NSObject {
    AVPairedDeviceInternal *_ivars;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *pairedDeviceID;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic) NSString *productName;

+ (id)pairedDevicesConnectedToOutputDevice:(id)a0;

- (id)ID;
- (void)dealloc;
- (id)initWithName:(id)a0 ID:(id)a1 modelID:(id)a2 playing:(BOOL)a3 productName:(id)a4;

@end
