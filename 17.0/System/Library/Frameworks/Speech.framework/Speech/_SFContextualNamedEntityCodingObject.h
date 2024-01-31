@class NSString, NSNumber;

@interface _SFContextualNamedEntityCodingObject : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, nonatomic) long long sourceFramework;
@property (readonly, copy, nonatomic) NSNumber *score;
@property (readonly, copy, nonatomic) NSNumber *category;
@property (readonly, copy, nonatomic) NSString *language;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContent:(id)a0 sourceFramework:(long long)a1 score:(id)a2 category:(id)a3 language:(id)a4;

@end
