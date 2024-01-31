@class MLMultiArray, NSArray, NSString;

@interface QUEmbeddingOutput : NSObject <QUEmbeddingOutput>

@property (retain, nonatomic) MLMultiArray *embedding;
@property (retain, nonatomic) NSArray *tokens;
@property (retain, nonatomic) NSArray *tokenRanges;
@property (retain, nonatomic) NSArray *subtokens;
@property (retain, nonatomic) NSArray *subtokenLenForTokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
