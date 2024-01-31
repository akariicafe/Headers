@class NSString, NSArray;

@interface AKDeviceListResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *deviceListVersion;
@property (copy, nonatomic) NSArray *deviceList;

+ (id)deviceMapFromResponseBody:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_parseDevicesFromResponseBody:(id)a0;
- (id)initWithResponseBody:(id)a0;

@end
