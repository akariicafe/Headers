@class GDSpan, NSString, NSNumber;

@interface GDMention : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) GDSpan *span;
@property (readonly, copy, nonatomic) NSString *entityClass;
@property (readonly, copy, nonatomic) NSNumber *score;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSpan:(id)a0 entityClass:(id)a1 score:(id)a2;

@end
