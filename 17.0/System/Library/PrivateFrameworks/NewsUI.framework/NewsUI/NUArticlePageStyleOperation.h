@class NUPageStyle, FCArticle;

@interface NUArticlePageStyleOperation : FCOperation

@property (readonly, nonatomic) FCArticle *article;
@property (readonly, nonatomic) unsigned long long pageNextAction;
@property (readonly, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NUPageStyle *pageStyle;

- (void)operationDidFinishWithError:(id)a0;
- (void)performOperation;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (id)initWithArticle:(id)a0 pageNextAction:(unsigned long long)a1 completion:(id /* block */)a2;

@end
