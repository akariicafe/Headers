@interface _CDUncachedSentinel : NSObject <_CDInteractionOrUncachedSentinel>

- (id)interactionIfCached;
- (BOOL)isUncachedSentinel;

@end
