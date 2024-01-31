@class NSString, NSIndexSet, NSLocale;

@interface CHTokenizedTextResultToken : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    double _recognitionScore;
    double _combinedScore;
    double _alignmentScore;
    unsigned long long _properties;
    long long _substrokeCount;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double recognitionScore;
@property (readonly, nonatomic) double combinedScore;
@property (readonly, nonatomic) double alignmentScore;
@property (readonly, nonatomic) unsigned long long properties;
@property (readonly, nonatomic) long long substrokeCount;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) unsigned int wordID;
@property (readonly, nonatomic) unsigned long long inputSources;
@property (readonly, nonatomic) BOOL isOriginal;
@property (readonly, nonatomic) BOOL isTransliterated;
@property (readonly, copy, nonatomic) NSLocale *recognizerSourceLocale;
@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, copy, nonatomic) NSIndexSet *strokeIndexes;

+ (unsigned long long)makeOriginalToken:(unsigned long long)a0;
+ (id)tokenWithString:(id)a0 strokeIndexes:(id)a1 wordID:(unsigned int)a2 recognitionScore:(double)a3 combinedScore:(double)a4 alignmentScore:(double)a5 properties:(unsigned long long)a6 recognizerSourceLocale:(id)a7 inputSources:(unsigned long long)a8 substrokeCount:(long long)a9 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a10;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)inputSources;
- (BOOL)isTransliterated;
- (BOOL)isOriginal;
- (double)heuristicTextScore;
- (id)initWithString:(id)a0 strokeIndexes:(id)a1 wordID:(unsigned int)a2 recognitionScore:(double)a3 combinedScore:(double)a4 alignmentScore:(double)a5 properties:(unsigned long long)a6 recognizerSourceLocale:(id)a7 inputSources:(unsigned long long)a8 substrokeCount:(long long)a9 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a10;
- (unsigned long long)inputSourceModifiersCount;
- (BOOL)isEquivalentToToken:(id)a0;
- (id)recognizerSourceLocale;

@end
