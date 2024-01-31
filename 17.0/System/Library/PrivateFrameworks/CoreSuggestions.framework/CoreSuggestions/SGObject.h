@class SGRecordId, SGOrigin;

@interface SGObject : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SGRecordId *recordId;
@property (readonly, nonatomic) SGOrigin *origin;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToSuggestion:(id)a0;
- (id)initWithRecordId:(id)a0 origin:(id)a1;

@end
