@class MRAVOutputDeviceDescription;

@interface MRUVirtualHearingAidDevice : MRAVOutputDevice

@property (readonly, nonatomic) MRAVOutputDeviceDescription *deviceDescription;

- (unsigned int)deviceSubtype;
- (id)uid;
- (void).cxx_destruct;
- (id)name;
- (unsigned int)deviceType;
- (id)initWithDeviceDescription:(id)a0;

@end
