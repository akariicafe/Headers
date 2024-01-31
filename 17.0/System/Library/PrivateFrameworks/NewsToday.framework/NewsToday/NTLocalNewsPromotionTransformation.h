@class NSString;
@protocol NTFeedTransforming;

@interface NTLocalNewsPromotionTransformation : NSObject <NTFeedTransforming>

@property (readonly, copy, nonatomic) NSString *localNewsPromotedArticleID;
@property (readonly, nonatomic) unsigned long long localNewsPromotionIndex;
@property (readonly, nonatomic) id<NTFeedTransforming> baseTransformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
