@class NSError, NSMutableArray;

@interface ECMessageBodyParser : ECMessageBodyParserObject {
    NSMutableArray *_subparsers;
    NSMutableArray *_elementPool;
    NSMutableArray *_paragraphNodes;
    id /* block */ _foundMessageBodyElementBlock;
    NSError *_parserError;
    struct __CFArray { } *_nodesStackCache;
    struct __CFDictionary { } *_nodesLevelCache;
    struct __CFDictionary { } *_nodesQuoteLevelCache;
}

@property (class, readonly, nonatomic) BOOL cacheRetainsNodes;

@property (nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSError *parserError;

+ (BOOL)isLinebreakImpliedAfterTagName:(id)a0;
+ (BOOL)isLinebreakImpliedBeforeTagName:(id)a0;

- (BOOL)parse;
- (id)init;
- (void)dealloc;
- (void)addSubparser:(id)a0;
- (void)didFindBodyElement:(id)a0;
- (void)didFindError:(id)a0;
- (void)didFinishParsing;
- (void)enqueueParagraphNode:(id)a0 withTagName:(id)a1;
- (void)flushParagraphNodes;
- (id)getAvailableMessageBodyElement;
- (void)getLevel:(long long *)a0 quoteLevel:(long long *)a1 forBodyNode:(id)a2;
- (BOOL)isLandmarkTagName:(id)a0;
- (Class)messageBodyElementClass;
- (Class)messageBodyStringAccumulatorClass;
- (unsigned long long)messageBodyStringAccumulatorDefaultOptions;
- (id)newStringAccumulatorWithOptions:(unsigned long long)a0 lengthLimit:(unsigned long long)a1;
- (unsigned long long)quoteLevelForBodyNode:(id)a0;
- (void)removeSubparser:(id)a0;
- (void)setFoundMessageBodyElementBlock:(id /* block */)a0;
- (BOOL)shouldIgnoreTagWithTagName:(id)a0;
- (BOOL)shouldProceedParsing;
- (void)willBeginParsing;

@end
