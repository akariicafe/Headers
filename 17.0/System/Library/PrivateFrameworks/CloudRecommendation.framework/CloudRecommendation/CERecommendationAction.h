@class NSString;

@interface CERecommendationAction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (copy, nonatomic) NSString *actionType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 actionTitle:(id)a1 actionType:(id)a2;

@end
