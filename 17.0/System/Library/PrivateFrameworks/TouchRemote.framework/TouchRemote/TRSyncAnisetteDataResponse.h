@interface TRSyncAnisetteDataResponse : TRResponseMessage

@property (nonatomic) BOOL didSucceed;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
