@class NSString, NSArray, WFAQIScaleGradient;

@interface WFAQIScale : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *displayLabel;
@property (nonatomic, getter=isNumerical) BOOL numerical;
@property (nonatomic, getter=isAscending) BOOL ascending;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) WFAQIScaleGradient *gradient;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToScale:(id)a0;

@end
