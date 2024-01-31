@interface TUNeighborhoodHandoffContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long pullContext;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithHandoffType:(long long)a0;
- (id)initWithPullContext:(long long)a0;

@end
