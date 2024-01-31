@class NSString, SSURLBag, NSURL;

@interface SKUIProductReviewURLProvider : NSObject

@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) SSURLBag *urlBag;
@property (retain, nonatomic) NSURL *rateURL;
@property (retain, nonatomic) NSURL *writeReviewURL;

- (id)init;
- (void).cxx_destruct;
- (id)_urlByAppendingItemId:(id)a0;
- (void)fetchURLsWithCompletion:(id /* block */)a0;
- (id)initWithClientContext:(id)a0 itemID:(id)a1;

@end
