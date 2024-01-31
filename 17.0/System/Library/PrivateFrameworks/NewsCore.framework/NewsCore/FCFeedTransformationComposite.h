@class NSArray, NSMutableArray, NSString;

@interface FCFeedTransformationComposite : NSObject <FCFeedTransforming>

@property (copy, nonatomic) NSArray *feedTransformations;
@property (readonly, nonatomic) BOOL shouldLogTransformationResults;
@property (readonly, nonatomic) NSMutableArray *transformationLogs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transformFeedItems:(id)a0;
- (id)init;
- (id)transformHeadlines:(id)a0;
- (void).cxx_destruct;
- (id)initWithFeedTransformations:(id)a0;
- (id)initWithFeedTransformations:(id)a0 logTransformationResults:(BOOL)a1;

@end
