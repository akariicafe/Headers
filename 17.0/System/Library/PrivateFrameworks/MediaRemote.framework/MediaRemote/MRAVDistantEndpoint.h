@class NSXPCListenerEndpoint, NSArray, MRAVDistantOutputDevice, MRAVDistantExternalDeviceFactory, MRDistantExternalDevice, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRAVDistantEndpoint : MRAVEndpoint <NSSecureCoding> {
    BOOL _canModifyGroupMembership;
    long long _connectionType;
    NSString *_localizedName;
    NSString *_uniqueIdentifier;
}

@property (class, readonly, nonatomic) MRAVDistantExternalDeviceFactory *externalDeviceFactory;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalDeviceQueue;
@property (copy, nonatomic) NSArray *distantOutputDevices;
@property (copy, nonatomic) NSArray *distantPersonalOutputDevices;
@property (retain, nonatomic) MRAVDistantOutputDevice *distantGroupLeader;
@property (retain, nonatomic) MRDistantExternalDevice *distantExternalDevice;
@property (retain, nonatomic) NSXPCListenerEndpoint *externalDeviceListenerEndpoint;

- (void)setLocalizedName:(id)a0;
- (id)initWithDescriptor:(id)a0;
- (id)designatedGroupLeader;
- (void)dealloc;
- (BOOL)isProxyGroupPlayer;
- (id)externalDevice;
- (id)personalOutputDevices;
- (BOOL)canModifyGroupMembership;
- (BOOL)isConnected;
- (long long)connectionType;
- (void)encodeWithCoder:(id)a0;
- (id)outputDevices;
- (void)_handleConnectionStateDidChangeNotification:(id)a0;
- (void)setUniqueIdentifier:(id)a0;
- (id)localizedName;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)debugDescription;
- (id)_externalOutputContext;
- (id)initWithCoder:(id)a0;

@end
