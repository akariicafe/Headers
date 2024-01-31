@interface TRSetupNetworkResponse : TRResponseMessage

@property (nonatomic) BOOL hasNetwork;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
