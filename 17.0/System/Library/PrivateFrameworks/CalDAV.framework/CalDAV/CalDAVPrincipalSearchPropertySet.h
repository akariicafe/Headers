@class NSSet;

@interface CalDAVPrincipalSearchPropertySet : NSObject

@property (retain, nonatomic) NSSet *stringProperties;
@property (readonly, nonatomic) BOOL supportsPropertySearch;

+ (id)searchSetWithProperties:(id)a0;

- (BOOL)supportsPropertyTypeWithNameSpace:(id)a0 andName:(id)a1;
- (id)initWithStringProperties:(id)a0;
- (BOOL)isEqualToPropertySet:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsWellKnownType:(int)a0;
- (id)initWithSearchProperties:(id)a0;

@end
