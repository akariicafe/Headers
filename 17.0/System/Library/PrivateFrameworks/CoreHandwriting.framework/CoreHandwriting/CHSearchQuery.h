@class NSString, NSArray;

@interface CHSearchQuery : CHQuery {
    NSArray *_foundItems;
}

@property (copy, nonatomic) NSString *queryString;
@property (nonatomic) BOOL caseMatchingOnly;
@property (nonatomic) BOOL fullWordsOnly;
@property (readonly, copy, nonatomic) NSArray *foundItems;

- (id)debugName;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithRecognitionSession:(id)a0;
- (id)q_foundItemsForSearchString:(id)a0 sessionResult:(id)a1;
- (void)q_updateQueryResult;

@end
