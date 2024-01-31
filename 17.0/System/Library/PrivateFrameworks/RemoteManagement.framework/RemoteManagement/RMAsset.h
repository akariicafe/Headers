@class NSString, NSData, RMManagementChannel;

@interface RMAsset : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *serverToken;
@property (readonly, copy, nonatomic) NSData *content;
@property (readonly, copy, nonatomic) RMManagementChannel *channel;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToAsset:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(id)a0 identifier:(id)a1 serverToken:(id)a2 content:(id)a3 channel:(id)a4;

@end
