@class NSCache;

@interface MUWebContentBlocker : NSObject {
    NSCache *_regularExpressionCache;
}

+ (id)sharedBlocker;

- (void).cxx_destruct;
- (id)_regularExpression;
- (id)patternForBlocking;
- (BOOL)shouldBlockLoadingOfURL:(id)a0;

@end
