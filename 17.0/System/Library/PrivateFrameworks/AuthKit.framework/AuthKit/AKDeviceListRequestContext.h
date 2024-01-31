@class NSString, NSArray;

@interface AKDeviceListRequestContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isForceFetch) BOOL forceFetch;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) BOOL includeUntrustedDevices;
@property (nonatomic) BOOL includeFamilyDevices;
@property (copy, nonatomic) NSArray *services;
@property (copy, nonatomic) NSArray *operatingSystems;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
