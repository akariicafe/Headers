@interface ANSTSkinToneEstimate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long typeIConfidence;
@property (readonly, nonatomic) long long typeIIConfidence;
@property (readonly, nonatomic) long long typeIIIConfidence;
@property (readonly, nonatomic) long long typeIVConfidence;
@property (readonly, nonatomic) long long typeVConfidence;
@property (readonly, nonatomic) long long typeVIConfidence;

+ (id)new;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithTypeIConfidence:(long long)a0 typeIIConfidence:(long long)a1 typeIIIConfidence:(long long)a2 typeIVConfidence:(long long)a3 typeVConfidence:(long long)a4 typeVIConfidence:(long long)a5;

@end
