@class NSString, NSNumber;

@interface LNQueryParameterSortingOption : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *parameterIdentifier;
@property (readonly, nonatomic) long long order;
@property (readonly, copy, nonatomic) NSNumber *sortParameterIndex;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOrder:(long long)a0 parameterIdentifier:(id)a1;
- (id)initWithOrder:(long long)a0 sortParameterIndex:(id)a1;

@end
