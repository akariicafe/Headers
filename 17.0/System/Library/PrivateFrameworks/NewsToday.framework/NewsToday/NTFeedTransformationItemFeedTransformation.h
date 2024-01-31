@class NSString;
@protocol FCFeedTransforming;

@interface NTFeedTransformationItemFeedTransformation : NSObject <NTFeedTransforming>

@property (retain, nonatomic) id<FCFeedTransforming> feedItemTransformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
