@class SFSearchResult;

@interface SFResultFeedback : SFFeedback <NSCopying>

@property (retain, nonatomic) SFSearchResult *result;

+ (BOOL)supportsSecureCoding;

- (id)initWithResult:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
