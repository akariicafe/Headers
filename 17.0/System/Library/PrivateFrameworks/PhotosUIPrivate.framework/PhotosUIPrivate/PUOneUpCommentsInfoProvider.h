@interface PUOneUpCommentsInfoProvider : NSObject

+ (BOOL)_canHandleDisplayAsset:(id)a0;
+ (unsigned long long)commentCountForDisplayAsset:(id)a0;
+ (BOOL)hasUserLikedDisplayAsset:(id)a0;
+ (unsigned long long)likeCountForDisplayAsset:(id)a0;
+ (void)toggleLike:(BOOL)a0 forDisplayAsset:(id)a1;

@end
