@interface BPSLinkCell : BPSBadgedTableCell

+ (double)scale;
+ (id)_iconCache;

- (id)getLazyIcon;
- (id)blankIcon;
- (void)forceSynchronousIconLoadOnNextIconLoad;

@end
