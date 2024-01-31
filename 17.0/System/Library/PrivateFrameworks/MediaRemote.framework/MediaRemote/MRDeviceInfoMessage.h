@class MRDeviceInfo, MRSupportedProtocolMessages;

@interface MRDeviceInfoMessage : MRProtocolMessage {
    MRSupportedProtocolMessages *_supportedProtocolMessages;
}

@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;
@property (readonly, nonatomic) MRSupportedProtocolMessages *supportedProtocolMessages;

- (void).cxx_destruct;
- (unsigned long long)type;
- (unsigned long long)encryptionType;
- (id)initWithDeviceInfo:(id)a0;

@end
