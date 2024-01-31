@class NSArray;
@protocol SXComponentInserter, SXComponentInsertionCacheValidator;

@interface SXComponentInsertionCacheItem : NSObject {
    id<SXComponentInserter> _inserter;
    id<SXComponentInsertionCacheValidator> _validator;
    NSArray *_results;
}

- (void).cxx_destruct;

@end
