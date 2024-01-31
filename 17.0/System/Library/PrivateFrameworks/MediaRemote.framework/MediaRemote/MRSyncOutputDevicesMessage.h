@class NSArray;

@interface MRSyncOutputDevicesMessage : MRProtocolMessage {
    NSArray *_outputDevices;
}

@property (readonly, nonatomic) NSArray *outputDevices;

- (id)initWithOutputDevices:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;

@end
