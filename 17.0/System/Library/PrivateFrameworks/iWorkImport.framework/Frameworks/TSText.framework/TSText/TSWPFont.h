@class UIFont, NSString, NSMutableDictionary, NSArray, UIFontDescriptor;

@interface TSWPFont : NSObject

@property (retain, nonatomic) NSString *postScriptName;
@property (retain, nonatomic) NSString *familyName;
@property (retain, nonatomic) NSString *localizedFamilyName;
@property (retain, nonatomic) UIFont *platformFont;
@property (retain, nonatomic) UIFontDescriptor *platformFontDescriptor;
@property (nonatomic) unsigned long long hashValue;
@property (nonatomic) BOOL isFallbackFont;
@property (retain) NSMutableDictionary *alternatePlatformFonts;
@property (retain, nonatomic) NSArray *creationBacktrace;
@property (readonly, nonatomic) NSString *desiredPostScriptName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) double size;
@property (readonly, nonatomic) struct __CTFont { } *ctFont;
@property (readonly, nonatomic) BOOL bold;
@property (readonly, nonatomic) BOOL italic;
@property (readonly, nonatomic) BOOL isMasqueradingFont;
@property (readonly, nonatomic) BOOL isRequestedFont;
@property (readonly, nonatomic) BOOL shouldShowFallbackBadge;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSArray *familyFaces;
@property (readonly, nonatomic) TSWPFont *baseFont;

+ (id)systemFont;
+ (BOOL)isKeyValueProxyLeafType;
+ (id)baseFontForFamilyName:(id)a0;
+ (id)baseFontWithDescriptor:(id)a0;
+ (id)facesOfFontFamily:(id)a0;
+ (id)fontWithDesiredPostScriptName:(id)a0;
+ (id)fontWithDesiredPostScriptName:(id)a0 atSize:(double)a1;
+ (id)fontWithDesiredPostScriptName:(id)a0 fallbackFont:(id)a1 ofType:(unsigned long long)a2;
+ (id)fontWithOpaqueIdentifier:(id)a0;
+ (id)helveticaFont;
+ (BOOL)isSystemFontName:(id)a0;
+ (id)loadPlatformFontForPostScriptName:(id)a0 size:(double)a1;
+ (id)loadPlatformFontOrFallbackForPostScriptName:(id)a0 size:(double)a1 foundType:(unsigned long long *)a2;
+ (id)localizedFamilyNameForPlatformFont:(id)a0;
+ (id)localizedMasqueradingFontFamilyNames;
+ (id)masqueradingFontNames;
+ (id)missingFont;
+ (id)missingFontPostScriptName;
+ (unsigned long long)optionsForLoadingPlatformFontWithPostScriptName:(id)a0;
+ (id)postScriptNameForFamilyName:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithSize:(double)a0;
- (id)copyWithSize:(double)a0 bold:(BOOL)a1 italic:(BOOL)a2;
- (id)copyWithSize:(double)a0 bold:(BOOL)a1 italic:(BOOL)a2 traits:(id)a3;
- (struct __CTFont { } *)ctFontForSize:(double)a0;
- (struct __CTFont { } *)ctFontForSize:(double)a0 bold:(BOOL)a1 italic:(BOOL)a2;
- (struct __CTFont { } *)ctFontForSize:(double)a0 bold:(BOOL)a1 italic:(BOOL)a2 traits:(id)a3;
- (id)initWithDesiredPostScriptName:(id)a0;
- (id)initWithDesiredPostScriptName:(id)a0 platformFontDescriptor:(id)a1 andPlatformFont:(id)a2 ofType:(unsigned long long)a3;
- (id)initWithDesiredPostScriptName:(id)a0 platformFontDescriptor:(id)a1 andPlatformFont:(id)a2 ofType:(unsigned long long)a3 localizedFamilyName:(id)a4;
- (id)initWithDesiredPostScriptName:(id)a0 size:(double)a1;
- (BOOL)isBaseFontEqualToBaseFontFor:(id)a0;
- (BOOL)isMasqueradingFontName;

@end
