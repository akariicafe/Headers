@class NSArray;

@interface ASDIAPInfoRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) NSArray *adamIds;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithAdamIds:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
