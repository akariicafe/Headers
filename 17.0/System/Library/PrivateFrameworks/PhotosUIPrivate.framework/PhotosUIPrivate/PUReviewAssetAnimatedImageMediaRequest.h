@interface PUReviewAssetAnimatedImageMediaRequest : NSObject <PUReviewAssetCancelableMediaRequest>

@property (readonly, nonatomic) long long _animatedRequestID;

- (void)cancelRequest;
- (id)initWithAnimatedImageRequestID:(long long)a0;

@end
