@class NSString;

@interface CNAutocompleteNameComponents : NSObject <NSCopying>

@property (readonly) NSString *firstName;
@property (readonly) NSString *lastName;
@property (readonly) NSString *nickname;
@property (readonly) NSString *nameSuffix;

+ (id)contactKeys;
+ (id)nameComponentsWithFirstName:(id)a0 lastName:(id)a1 nickname:(id)a2 nameSuffix:(id)a3;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
