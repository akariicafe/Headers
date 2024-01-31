@class LNImage, LNStaticDeferredLocalizedString, NSArray;

@interface LNDisplayRepresentation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNStaticDeferredLocalizedString *title;
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *subtitle;
@property (readonly, nonatomic) LNImage *image;
@property (readonly, copy, nonatomic) NSArray *synonyms;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2 synonyms:(id)a3;

@end
