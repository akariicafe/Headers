@class NSDictionary, SUUIReviewMetadata;

@interface SUUIPostReviewOperation : ISOperation {
    NSDictionary *_responseDictionary;
    SUUIReviewMetadata *_review;
}

@property (readonly) NSDictionary *responseDictionary;

- (void)run;
- (void).cxx_destruct;
- (id)_httpBody;
- (id)initWithReviewMetadata:(id)a0;

@end
