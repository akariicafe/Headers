@class NSCache;

@interface _NBRegularExpressionCache : NSObject

@property (retain, nonatomic) NSCache *cache;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)regularExpressionForPattern:(id)a0 error:(id *)a1;

@end
