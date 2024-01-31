@class NSString, NSObject;
@protocol CRKNetworkPathMonitor;

@interface CRKCurrentPlatformIPAddressProvider : NSObject <CRKIPAddressProviding>

@property (readonly, nonatomic) NSObject<CRKNetworkPathMonitor> *pathMonitor;
@property (readonly, copy, nonatomic) NSString *IPAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingIPAddress;
+ (id)makePathMonitorWithPrimitives:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNetworkPrimitives:(id)a0;

@end
