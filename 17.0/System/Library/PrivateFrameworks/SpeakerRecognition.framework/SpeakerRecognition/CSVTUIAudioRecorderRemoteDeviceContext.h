@class NSArray;

@interface CSVTUIAudioRecorderRemoteDeviceContext : NSObject

@property (readonly, nonatomic) unsigned long long remoteTrainingDeviceType;
@property (readonly, copy, nonatomic) NSArray *remoteTrainingDeviceUUIDList;

- (void).cxx_destruct;
- (id)initWithRemoteTrainingDeviceType:(unsigned long long)a0 remoteTrainingDeviceUUIDList:(id)a1;

@end
