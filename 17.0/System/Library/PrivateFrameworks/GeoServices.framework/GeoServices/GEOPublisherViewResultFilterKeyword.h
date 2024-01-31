@class GEOPDPublisherViewResultFilterKeyword, GEORelatedSearchSuggestion;

@interface GEOPublisherViewResultFilterKeyword : NSObject {
    GEOPDPublisherViewResultFilterKeyword *_filterKeywordIdentifier;
}

@property (readonly, nonatomic) GEORelatedSearchSuggestion *searchSuggestion;
@property (readonly, nonatomic) GEOPDPublisherViewResultFilterKeyword *keywordIdentifier;

- (void).cxx_destruct;
- (id)initWithFilterKeywordIdentifier:(id)a0;

@end
