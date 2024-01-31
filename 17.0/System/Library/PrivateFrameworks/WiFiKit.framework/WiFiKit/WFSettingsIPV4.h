@class NSArray, NSString, NSDictionary;

@interface WFSettingsIPV4 : NSObject <WFSettingsPersistable>

@property (nonatomic) long long method;
@property (retain, nonatomic) NSArray *addresses;
@property (retain, nonatomic) NSArray *subnetMasks;
@property (copy, nonatomic) NSString *router;
@property (copy, nonatomic) NSString *dhcpClientID;
@property (retain, nonatomic) NSDictionary *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)automaticConfig;
+ (id)bootPConfig;

- (id)protocol;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithMethod:(long long)a0 addresses:(id)a1 subnetMasks:(id)a2 router:(id)a3 dhcpClientID:(id)a4;

@end
