@class NSString;

@interface WiFiUsageInterfaceCapabilities : NSObject

@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) struct _Apple80211 { } *a11Ref;
@property (nonatomic) unsigned long long maxPHYRate;
@property (nonatomic) unsigned long long maxNumberOfSpatialStreams;

- (id)initWithInterfaceName:(id)a0;
- (unsigned long long)maxInterfacePHYRate;
- (void)dealloc;
- (unsigned long long)currentLinkPHYRate;
- (id)description;
- (unsigned long long)maxLinkPHYRate;
- (void).cxx_destruct;
- (unsigned long long)maxInterfaceNumberOfSpatialStreams;

@end
