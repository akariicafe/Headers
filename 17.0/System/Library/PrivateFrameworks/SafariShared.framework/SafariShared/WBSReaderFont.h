@class NSString;

@interface WBSReaderFont : NSObject <NSCopying> {
    NSString *_displayName;
    NSString *_localizedName;
    BOOL _hasCalculatedLocalizedName;
}

@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSString *familyNameForWebContent;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;
@property (readonly, nonatomic) long long type;

+ (id)systemSerifFont;
+ (id)fontWithFamilyName:(id)a0 displayName:(id)a1;
+ (id)systemFontWithDisplayName:(id)a0;
+ (id)systemFont;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_localizedName;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct RetainPtr<const __CTFontDescriptor *> { void *x0; })_fontDescriptorRefForFontFamilyName:(id)a0 restrictToEnabled:(BOOL)a1;
- (id)_initWithFamilyName:(id)a0 displayName:(id)a1 type:(long long)a2;

@end
