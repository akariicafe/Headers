@class NSString, NSArray;

@interface GEOPOIEventCategory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSArray *localizedNames;

+ (id)poiEventCategoriesForEventCategories:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCategory:(id)a0 localizedNames:(id)a1;
- (id)initWithEventCategory:(id)a0;
- (BOOL)isEqualToPOIEventCategory:(id)a0;
- (id)parsePDCategories:(id)a0;

@end
