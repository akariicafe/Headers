@class NSString;

@interface NSLocaleRegion : NSObject

@property (copy) NSString *twoCharacterCode;
@property (copy) NSString *threeCharacterCode;

- (id)init;
- (unsigned long long)hash;
- (id)initWithLocaleIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithRegionIdentifier:(id)a0;

@end
