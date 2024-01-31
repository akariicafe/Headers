@class NSString, NSPersonNameComponents;

@interface HKCloudSyncAccountInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSPersonNameComponents *fullName;
@property (readonly, copy, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) unsigned long long accountSettings;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFullName:(id)a0 emailAddress:(id)a1 accountSettings:(unsigned long long)a2;

@end
