@class NSString, NSArray;

@interface NSTermOfAddress : NSObject <NSCopying, NSSecureCoding> {
    long long _gender;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *languageIdentifier;
@property (readonly, copy) NSArray *pronouns;

+ (id)neutral;
+ (id)feminine;
+ (id)localizedForLanguageIdentifier:(id)a0 withPronouns:(id)a1;
+ (id)masculine;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_containsPronoun:(id)a0 withGrammemes:(id)a1;
- (id)_initWithGender:(long long)a0;
- (id)_initWithPronouns:(id)a0 forLanguage:(id)a1;
- (BOOL)_isSupportedInLanguage:(id)a0;
- (id)_morphologyForLanguage:(id)a0;
- (id)_withExtrapolatedPronouns;

@end
