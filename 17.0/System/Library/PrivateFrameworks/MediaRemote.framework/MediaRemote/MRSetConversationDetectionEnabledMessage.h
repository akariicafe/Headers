@class NSString;

@interface MRSetConversationDetectionEnabledMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *outputDeviceUID;
@property (readonly, nonatomic) BOOL enabled;

- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithOutputDeviceUID:(id)a0 enabled:(BOOL)a1;

@end
