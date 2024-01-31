@protocol VKVectorOverlayDelegate;

@interface VKVectorOverlayData : NSObject {
    long long _blendMode;
}

@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) id<VKVectorOverlayDelegate> delegate;
@property (nonatomic) long long blendMode;

- (id)init;
- (void).cxx_destruct;

@end
