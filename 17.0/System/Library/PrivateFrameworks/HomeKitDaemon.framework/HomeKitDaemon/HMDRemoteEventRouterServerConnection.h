@class NSString, NSUUID, HMDDevice;

@interface HMDRemoteEventRouterServerConnection : NSObject <HMEMessageDatagramConnection> {
    BOOL _supportsFragmentMessage;
    NSUUID *_deviceIdentifier;
    HMDDevice *_device;
    NSUUID *_userAccessControlProviderUUID;
    long long _connectionMode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
