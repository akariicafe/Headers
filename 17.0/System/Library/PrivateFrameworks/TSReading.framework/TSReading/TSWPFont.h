@class NSString;

@interface TSWPFont : NSObject {
    NSString *_displayName;
    NSString *_familyName;
    unsigned long long _hash;
}

@property (copy, nonatomic) NSString *fontName;
@property (copy, nonatomic) NSString *compatibilityName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *familyName;

+ (id)fontWithName:(id)a0 compatibilityName:(id)a1;
+ (id)fontWithName:(id)a0;
+ (BOOL)isKeyValueProxyLeafType;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFontName:(id)a0;
- (id)initWithFontName:(id)a0 compatibilityName:(id)a1;

@end
