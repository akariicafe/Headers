@class _UISSecureControlCategory;

@interface _UISSecureControlTag : UISSlotTag <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _UISSecureControlCategory *category;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) long long cornerStyle;
@property (readonly, nonatomic) struct CGColor { } *baseForegroundColor;
@property (readonly, nonatomic) struct CGColor { } *baseBackgroundColor;
@property (readonly, nonatomic) unsigned long long imagePlacement;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

+ (unsigned long long)cacheLimit;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCategory:(id)a0 cornerStyle:(long long)a1 cornerRadius:(double)a2 baseForegroundColor:(struct CGColor { } *)a3 baseBackgroundColor:(struct CGColor { } *)a4 imagePlacement:(unsigned long long)a5 size:(struct CGSize { double x0; double x1; })a6;
- (id)resolvedStyleForStyle:(id)a0;
- (unsigned long long)hitTestInformationMaskForStyle:(id)a0;
- (unsigned long long)authenticationMessageContextForStyle:(id)a0;
- (unsigned long long)failGradeForStyle:(id)a0;
- (unsigned int)secureNameForStyle:(id)a0;

@end
