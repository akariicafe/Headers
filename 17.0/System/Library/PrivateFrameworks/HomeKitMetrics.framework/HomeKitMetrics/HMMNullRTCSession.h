@class NSUUID, NSString, HMMRTCSessionVoucher;

@interface HMMNullRTCSession : HMFObject <HMMRTCSession>

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) HMMRTCSessionVoucher *voucher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
