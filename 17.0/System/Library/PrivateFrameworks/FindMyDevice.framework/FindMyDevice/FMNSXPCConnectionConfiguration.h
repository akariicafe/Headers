@class NSString, NSXPCInterface;

@interface FMNSXPCConnectionConfiguration : NSObject <FMNSXPCConnectionConfigurable>

@property (class, readonly, nonatomic) FMNSXPCConnectionConfiguration *btDiscoveryConfiguration;
@property (class, readonly, nonatomic) FMNSXPCConnectionConfiguration *userNotificationConfiguration;
@property (class, readonly, nonatomic) FMNSXPCConnectionConfiguration *identityConfiguration;
@property (class, readonly, nonatomic) FMNSXPCConnectionConfiguration *helperConfiguration;
@property (class, readonly, nonatomic) FMNSXPCConnectionConfiguration *eraseDeviceServiceConfiguration;
@property (class, readonly, nonatomic) FMNSXPCConnectionConfiguration *fmipConfiguration;
@property (class, readonly, nonatomic) FMNSXPCConnectionConfiguration *emergencyCallInfoPublisherConfiguration;

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSXPCInterface *remoteInterface;
@property (retain, nonatomic) NSXPCInterface *exportedInterface;
@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL machService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
