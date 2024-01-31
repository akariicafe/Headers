@class NSString;

@interface CKPluginImageCacheKey : NSObject

@property (retain, nonatomic) NSString *stringIdentifier;
@property (nonatomic) long long integerIdentifier;

+ (id)keyWithStringIdentifier:(id)a0 integerIdentifier:(long long)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithStringIdentifier:(id)a0 integerIdentifier:(long long)a1;

@end
