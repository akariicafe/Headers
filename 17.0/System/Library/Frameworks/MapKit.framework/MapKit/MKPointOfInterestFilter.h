@class NSSet;

@interface MKPointOfInterestFilter : NSObject <NSSecureCoding, NSCopying> {
    NSSet *_includedCategories;
    NSSet *_excludedCategories;
}

@property (class, readonly, nonatomic) MKPointOfInterestFilter *filterIncludingAllCategories;
@property (class, readonly, nonatomic) MKPointOfInterestFilter *filterExcludingAllCategories;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_isInclusive) BOOL isInclusive;
@property (readonly, nonatomic, getter=_isAllCategories) BOOL isAllCategories;

- (id)init;
- (BOOL)_excludesAllCategories;
- (id)initExcludingCategories:(id)a0;
- (BOOL)includesCategory:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_includesAllCategories;
- (id)description;
- (BOOL)isEqualToPointOfInterestFilter:(id)a0;
- (id)initIncludingCategories:(id)a0;
- (id)initIncludingCategories:(id)a0 excludingCategories:(id)a1;
- (void).cxx_destruct;
- (id)_geoPOICategoryFilter;
- (BOOL)excludesCategory:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
