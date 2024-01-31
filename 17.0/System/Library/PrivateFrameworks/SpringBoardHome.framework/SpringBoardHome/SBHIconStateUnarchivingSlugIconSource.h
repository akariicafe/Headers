@class NSMutableDictionary;

@interface SBHIconStateUnarchivingSlugIconSource : NSObject <SBHIconStateUnarchiverIconSource> {
    NSMutableDictionary *_leafAppIcons;
}

- (id)applicationIconForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)leafIconForIdentifier:(id)a0;

@end
