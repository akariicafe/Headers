@class NSString;

@interface TUContinuityHandleAnonym : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) long long type;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 label:(id)a1 localizedDisplayName:(id)a2 type:(long long)a3;
- (id)localizedDisplayNameAfter112873359;

@end
