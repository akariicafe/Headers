@class NSString, NSDictionary;

@interface WBSFetchedCloudTabDeviceOrCloseRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *uuidString;
@property (readonly, copy, nonatomic) NSDictionary *deviceOrCloseRequestDictionary;

- (id)init;
- (id)initWithUUIDString:(id)a0 deviceOrCloseRequestDictionary:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
