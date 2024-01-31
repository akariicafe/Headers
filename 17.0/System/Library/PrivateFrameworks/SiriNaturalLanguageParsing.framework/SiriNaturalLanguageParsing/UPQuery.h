@class NSUUID, NSString, NSArray, NSDictionary;
@protocol SIRINLUSystemDialogAct, NSObject;

@interface UPQuery : NSObject

@property (readonly, copy) NSUUID *uuid;
@property (readonly, copy) NSString *utterance;
@property (readonly) NSArray *tokens;
@property (readonly) NSDictionary *embeddingsByToken;
@property (readonly, copy) NSArray *spans;
@property (readonly) id<SIRINLUSystemDialogAct, NSObject> dialogAct;

+ (id)tokenDescription:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)_buildEmbeddingsDictionaryWithNonWhitespaceTokens:(id)a0 nonWhitespaceTokenIndexes:(id)a1 embeddings:(id)a2 error:(id *)a3;
- (id)_buildTokenListWithTokenChain:(id)a0 nonWhitespaceTokenIndexes:(id)a1;
- (id)_createDialogActWithProtobufQuery:(id)a0;
- (id)_getNonWhitespaceTokenIndexes:(id)a0;
- (id)buildSpansListWithProtobufQuery:(id)a0 nonWhitespaceTokenIndexes:(id)a1 error:(id *)a2;
- (id)initWithProtobufQuery:(id)a0 error:(id *)a1;
- (id)initWithUtterance:(id)a0 tokens:(id)a1 embeddingsByToken:(id)a2 spans:(id)a3 dialogAct:(id)a4;

@end
