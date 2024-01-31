@class NSString, NSMutableArray;

@interface WBSParsecSearchMoviesResult : WBSParsecLegacySearchResult {
    NSMutableArray *_posterRepresentations;
}

@property (readonly, nonatomic) NSString *descriptionLeadInText;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)postersWithSession:(id)a0;

@end
