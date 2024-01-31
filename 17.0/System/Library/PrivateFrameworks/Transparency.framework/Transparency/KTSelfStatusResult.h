@class NSArray, NSDictionary;

@interface KTSelfStatusResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long optIn;
@property unsigned long long accountStatus;
@property unsigned long long systemStatus;
@property unsigned long long selfStatus;
@property (retain) NSArray *selfDevices;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)simpleStatus;

@end
