@class UIColor, NSHashTable;

@interface PBUIDeferredImageSlot : PBUIImageSlot {
    NSHashTable *_imageSlotObservers;
}

@property (retain, nonatomic) UIColor *fallbackColor;

- (void).cxx_destruct;
- (void)updateWithImage:(id)a0;
- (id)_deferredImageSlot;
- (void)addImageSlotObserver:(id)a0;
- (id)initWithLifetimeToken:(id)a0;
- (void)removeImageSlotObserver:(id)a0;

@end
