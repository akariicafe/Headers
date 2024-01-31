@class NSString;

@interface SFSearchResult_Compatibility : SFSearchResult_SpotlightExtras

@property (retain, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) NSString *externalIdentifier;
@property (retain, nonatomic) NSString *compatibilityTitle;

- (void)writeTo:(id)a0;
- (id)copy;
- (Class)classForCoder;
- (void)setUniqueIdentifier:(id)a0;
- (id)uniqueIdentifier;
- (id)debugDescription;
- (Class)classForKeyedArchiver;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isQuickGlance;
- (void)setSimpleTitle:(id)a0;
- (id)section_header;
- (id)simpleTitle;

@end
