@class NSString, NSData;

@interface THThreadNetwork : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *networkName;
@property (readonly, nonatomic) NSData *extendedPANID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 extendedPANID:(id)a1;

@end
