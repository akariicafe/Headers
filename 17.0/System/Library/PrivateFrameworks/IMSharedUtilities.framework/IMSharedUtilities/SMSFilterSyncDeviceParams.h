@class NSString;

@interface SMSFilterSyncDeviceParams : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *deviceUniqueID;
@property unsigned long long smsFilterCapabilitiesOptions;
@property (retain, nonatomic) NSString *filterExtensionName;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
