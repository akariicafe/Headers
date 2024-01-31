@class NSArray, NSDictionary;

@interface PRSPosterUpdateComplicationPayload : PRSPosterUpdatePayload <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *complications;
@property (readonly, nonatomic) NSDictionary *ambientWidgets;

- (id)rawValue;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithComplications:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAmbientWidgets:(id)a0;

@end
