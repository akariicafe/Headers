@class NSArray, NSString;
@protocol FCFeedTransforming;

@interface NTFeedTransformationIncrementalPersonalizedDiversifiedLimit : NSObject <FCFeedTransforming>

@property (copy, nonatomic) NSArray *priorFeedItems;
@property (retain, nonatomic) id<FCFeedTransforming> privateLimitTransformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
