@class NSArray, NSString, NSLocale;

@interface EMTResult : NSObject <NSCopying>

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) BOOL lowConfidence;
@property (readonly, nonatomic) NSString *metaInfo;
@property (readonly, nonatomic) NSString *romanization;
@property (readonly, nonatomic) NSArray *alternativeSelectionSpans;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocale:(id)a0 tokens:(id)a1 confidence:(float)a2 lowConfidence:(BOOL)a3 metaInfo:(id)a4 romanization:(id)a5 alternativeSelectionSpans:(id)a6;

@end
