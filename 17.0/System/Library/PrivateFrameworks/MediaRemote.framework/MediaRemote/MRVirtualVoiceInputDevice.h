@class NSData, MRVirtualVoiceInputDeviceDescriptor;

@interface MRVirtualVoiceInputDevice : NSObject

@property (readonly, nonatomic) unsigned int deviceID;
@property (copy, nonatomic) MRVirtualVoiceInputDeviceDescriptor *descriptor;
@property (nonatomic) unsigned int recordingState;
@property (readonly, nonatomic) NSData *data;

- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDeviceID:(unsigned int)a0;

@end
