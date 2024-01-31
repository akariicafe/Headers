@class NSCountedSet;

@interface IMScheduledUpdater : IMManualUpdater

@property (retain, nonatomic) NSCountedSet *holdingUpdatesKeys;

- (void)setNeedsUpdate;
- (void)updateIfNeeded;
- (void)dealloc;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)invalidate;
- (id)description;
- (void).cxx_destruct;
- (void)beginHoldingUpdatesForKey:(id)a0;
- (void)endHoldingUpdatesForAllKeys;
- (void)endHoldingUpdatesForKey:(id)a0;
- (BOOL)isHoldingUpdates;
- (BOOL)isHoldingUpdatesForKey:(id)a0;

@end
