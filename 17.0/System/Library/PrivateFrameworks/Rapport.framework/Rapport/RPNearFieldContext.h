@class NSString, NSData, NSUUID;

@interface RPNearFieldContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *applicationLabel;
@property (readonly, copy, nonatomic) NSData *pkData;
@property (readonly, nonatomic) NSUUID *bonjourListenerUUID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWitApplicationLabel:(id)a0;
- (id)initWithApplicationLabel:(id)a0 pkData:(id)a1 bonjourListenerUUID:(id)a2;

@end
