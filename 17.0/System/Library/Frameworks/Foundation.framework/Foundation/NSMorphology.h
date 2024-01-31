@class NSMutableDictionary, NSDictionary, NSData;

@interface NSMorphology : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_customPronouns;
}

@property (class, readonly) NSMorphology *userMorphology;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isUnspecified) BOOL unspecified;
@property (readonly, nonatomic) NSDictionary *_externalRepresentationDictionary;
@property (readonly, nonatomic) NSData *_externalRepresentation;
@property (readonly, getter=_customPronouns) NSDictionary *_customPronouns;
@property (copy, setter=_setCustomPronouns:) NSDictionary *_customPronouns;
@property (nonatomic) long long grammaticalGender;
@property (nonatomic) long long partOfSpeech;
@property (nonatomic) long long number;
@property (nonatomic) long long grammaticalCase;
@property (nonatomic) long long determination;
@property (nonatomic) long long grammaticalPerson;
@property (nonatomic) long long pronounType;
@property (nonatomic) long long definiteness;

+ (void)_clearCachedUserMorphology;
+ (void)_getUserMorphology:(id *)a0 userInflection:(id *)a1;
+ (id)_heuristicMorphologyForLanguage:(id)a0 prefix:(id)a1 suffix:(id)a2 featureName:(id *)a3 matchedPrefix:(BOOL *)a4 matchedSuffix:(BOOL *)a5;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithExternalRepresentation:(id)a0 error:(out id *)a1;
- (id)_initWithExternalRepresentationDictionary:(id)a0;
- (id)_morphunConstraints;
- (id)customPronounForLanguage:(id)a0;
- (id)initWithInflection:(id)a0;
- (BOOL)setCustomPronoun:(id)a0 forLanguage:(id)a1 error:(id *)a2;

@end
