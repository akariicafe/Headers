@class NSDictionary, NSString;

@interface HMFNetworkServiceInfo : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSDictionary *txtRecord;
@property (readonly, nonatomic) BOOL isUDP;
@property (readonly, nonatomic) BOOL isTCP;
@property (readonly, nonatomic) BOOL isAirPlay;
@property (readonly, nonatomic) BOOL isHAP;
@property (readonly, nonatomic) BOOL isMatter;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) NSString *serviceDomain;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *statusFlag;
@property (readonly, nonatomic) NSString *stateNumber;
@property (readonly, nonatomic) NSString *configNumber;

+ (id)logCategory;
+ (id)defaultServiceTypes;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithEndpoint:(id)a0 txtRecord:(id)a1;
- (id)initWithServiceName:(id)a0 serviceType:(id)a1 serviceDomain:(id)a2 txtRecord:(id)a3;
- (void)updateWithServiceInfo:(id)a0;

@end
