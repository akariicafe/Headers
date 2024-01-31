@class NSString;

@interface TLTransliteratorCandidate : NSObject <NSCopying>

@property (readonly, copy) NSString *inputWord;
@property (readonly, copy) NSString *transliteratedWord;
@property (readonly) double lmScore;
@property (readonly) double seq2seqScore;
@property (readonly) double totalScore;
@property (readonly) BOOL isExtensionCandidate;
@property (readonly) long long type;

+ (id)createWithCompositeTransliteratorCandidate:(const void *)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInputWord:(id)a0 transliteratedWord:(id)a1 lmScore:(double)a2 seq2seqScore:(double)a3 totalScore:(double)a4 isExtensionCandidate:(BOOL)a5 type:(long long)a6;

@end
