@class NSString, NSObject;
@protocol OS_xpc_object;

@interface CSRemoteDeviceProtocolInfo : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (readonly, nonatomic) unsigned long long protocolVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSString *deviceProductVersion;
@property (readonly, nonatomic) NSString *deviceProductType;
@property (readonly, nonatomic) unsigned long long deviceCategory;

+ (id)defaultProtocolInfo;
+ (id)localDeviceProtocolInfo;

- (id)description;
- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0;
- (id)initWithProtocolVersion:(unsigned long long)a0 buildVersion:(id)a1 deviceProductVersion:(id)a2 deviceProductType:(id)a3 deviceCategory:(unsigned long long)a4;

@end
