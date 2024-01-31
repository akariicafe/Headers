@class IDSService, NSObject, NRPairedDeviceRegistry;
@protocol OS_dispatch_workloop;

@interface SCLSchoolModeManagerConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) NRPairedDeviceRegistry *deviceRegistry;
@property (retain, nonatomic) IDSService *service;
@property (nonatomic) BOOL managesSchoolTimeSession;
@property (nonatomic) BOOL allowsNonTinkerPairing;
@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *workloop;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
