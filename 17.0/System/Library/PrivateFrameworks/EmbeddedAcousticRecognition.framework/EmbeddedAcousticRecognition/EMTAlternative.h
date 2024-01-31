@class EMTAlternativeDescription;

@interface EMTAlternative : NSObject <NSCopying>

@property (readonly, nonatomic) EMTAlternativeDescription *alternativeDescription;
@property (readonly, nonatomic) unsigned long long translationPhraseIndex;
@property (readonly, nonatomic) unsigned long long selectionSpanIndex;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDescription:(id)a0 translationPhraseIndex:(unsigned long long)a1 selectionSpanIndex:(unsigned long long)a2;

@end
