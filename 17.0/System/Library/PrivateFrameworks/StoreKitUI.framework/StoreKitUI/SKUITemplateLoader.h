@class NSRegularExpression, NSMutableDictionary, NSOperationQueue, NSArray, NSMutableArray;

@interface SKUITemplateLoader : NSObject {
    SKUITemplateLoader *_retainSelf;
}

@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) NSRegularExpression *templateParsingRegularExpression;
@property (readonly, nonatomic) NSMutableArray *errors;
@property (readonly, nonatomic) NSMutableDictionary *templateStrings;
@property (nonatomic) long long pendingOperationCount;
@property (readonly, copy, nonatomic) NSArray *URLs;
@property (readonly, copy, nonatomic) id /* block */ completionBlock;

- (void)load;
- (void).cxx_destruct;
- (void)_operation:(id)a0 didCompleteWithOutput:(id)a1;
- (void)_operation:(id)a0 didFailWithError:(id)a1;
- (void)_operationDidFinish:(id)a0;
- (id)_operationWithURL:(id)a0;
- (id)initWithURLs:(id)a0 completionBlock:(id /* block */)a1;

@end
