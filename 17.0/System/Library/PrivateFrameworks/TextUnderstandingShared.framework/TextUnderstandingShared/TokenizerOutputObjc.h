@class NSData;

@interface TokenizerOutputObjc : NSObject

@property (readonly, nonatomic) NSData *tokenIds;
@property (readonly, nonatomic) NSData *tokenRanges;
@property (readonly, nonatomic) NSData *wordIndexes;

- (void).cxx_destruct;
- (id)initWithTokenIds:(id)a0 tokenRanges:(id)a1 wordIndexes:(id)a2;

@end
