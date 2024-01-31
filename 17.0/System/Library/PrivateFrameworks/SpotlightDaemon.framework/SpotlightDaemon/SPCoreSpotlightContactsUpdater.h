@interface SPCoreSpotlightContactsUpdater : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)updateContactCounts:(id)a0;
- (id)updatedCountsFromExisting:(id)a0 result:(long long *)a1 shouldUpdateMonth:(BOOL)a2;

@end
