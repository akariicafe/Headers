@class VITextContext, NSString, VIAnnotation, VIQueryContext;
@protocol VIImageContent;

@interface VITextLookupQuery : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *queryTerm;
@property (readonly, copy, nonatomic) VITextContext *textContext;
@property (readonly, copy, nonatomic) NSString *hintDomain;
@property (readonly, nonatomic) id<VIImageContent> imageContext;
@property (readonly, nonatomic) VIAnnotation *annotation;
@property (readonly, nonatomic) VIQueryContext *queryContext;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithQueryTerm:(id)a0 hintDomain:(id)a1 textContext:(id)a2 imageContext:(id)a3 annotation:(id)a4 queryContext:(id)a5;
- (id)initWithQueryTerm:(id)a0 domain:(id)a1 textContext:(id)a2 imageContext:(id)a3 annotation:(id)a4 queryContext:(id)a5;

@end
