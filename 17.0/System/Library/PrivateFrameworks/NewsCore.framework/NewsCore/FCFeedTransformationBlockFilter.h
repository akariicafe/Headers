@class NSString;

@interface FCFeedTransformationBlockFilter : NSObject <FCFeedTransforming>

@property (copy, nonatomic) id /* block */ predicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)blockFilterWithPredicate:(id /* block */)a0;

- (id)transformFeedItems:(id)a0;
- (void).cxx_destruct;

@end
