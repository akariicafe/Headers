@class NSString, NSArray, NSData, NSNumber;

@interface MTRGeneralDiagnosticsClusterNetworkInterfaceType : MTRGeneralDiagnosticsClusterNetworkInterface

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *isOperational;
@property (copy, nonatomic) NSNumber *offPremiseServicesReachableIPv4;
@property (copy, nonatomic) NSNumber *offPremiseServicesReachableIPv6;
@property (copy, nonatomic) NSData *hardwareAddress;
@property (copy, nonatomic) NSArray *iPv4Addresses;
@property (copy, nonatomic) NSArray *iPv6Addresses;
@property (copy, nonatomic) NSNumber *type;

@end
