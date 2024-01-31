@class NSObject, CNAvatarImageRenderer;
@protocol OS_dispatch_queue;

@interface NCAvatarImageRenderer : NSObject {
    CNAvatarImageRenderer *_avatarRenderer;
    NSObject<OS_dispatch_queue> *_avatarImageGenerationQueue;
    unsigned long long _avatarImageGenerationQueueUsageCount;
    double _pointSize;
}

+ (id)sharedInstanceForPointSize:(double)a0;

- (void).cxx_destruct;
- (void)_decrementAvatarImageGenerationQueueUsageCountAndInvalidateIfNeeded;
- (id)_getAvatarImageGenerationQueueAndIncrementUsageCount;
- (void)_imageForContacts:(id)a0 compatibleWithTraitCollection:(id)a1 circular:(BOOL)a2 completion:(id /* block */)a3;
- (id)_imageNamed:(id)a0 inBundleIdentifier:(id)a1 traitCollection:(id)a2;
- (id)_initWithPointSize:(double)a0;
- (id)_silhouetteFallbackImageNameForContacts:(id)a0;
- (id)_systemImageNamed:(id)a0 traitCollection:(id)a1;
- (void)renderAvatarForRequest:(id)a0 compatibleWithTraitCollection:(id)a1 completion:(id /* block */)a2;

@end
