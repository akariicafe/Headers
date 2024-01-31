@class AAAbsintheContext, NSDate;

@interface AAAbsintheSignerContextCache : NSObject

@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) AAAbsintheContext *context;

+ (id)cacheWithContext:(id)a0;

- (id)init;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;

@end
