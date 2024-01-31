@class NSString;

@interface WBSPerSitePreference : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)localizedStringForBinaryPreferenceValue:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
