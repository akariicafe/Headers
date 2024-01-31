@interface PXLivePhotoTrimScrubberHiddenAnimationHelper : NSObject {
    long long _hideRequestCounter;
}

@property (readonly, copy, nonatomic) id /* block */ animationBlock;
@property (nonatomic) BOOL hidden;

- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_setHidden:(BOOL)a0 animated:(BOOL)a1 afterDelay:(double)a2;
- (void)_setHidden:(BOOL)a0 animated:(BOOL)a1 withRequstID:(long long)a2;
- (id)initWithAnimationBlock:(id /* block */)a0;

@end
