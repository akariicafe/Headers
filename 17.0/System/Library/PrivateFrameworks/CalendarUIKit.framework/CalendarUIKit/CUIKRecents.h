@interface CUIKRecents : NSObject

+ (id)logHandle;
+ (id)mapKitStyleAttributesForRecent:(id)a0;
+ (id)directoryLocationForRecent:(id)a0 onSource:(id)a1;
+ (id)locationForRecent:(id)a0;
+ (id)mapKitHandleForRecent:(id)a0;
+ (BOOL)recentDirectoryLocation:(id)a0 matchesSource:(id)a1;
+ (id)recentEventWithRecentContact:(id)a0 styleAttributes:(id)a1;
+ (id)recentForDirectoryLocation:(id)a0 onSource:(id)a1;
+ (id)recentForLocation:(id)a0 withAddressString:(id)a1 andTitle:(id)a2 mapItem:(id)a3;
+ (BOOL)recentIsDirectoryLocation:(id)a0;
+ (BOOL)recentMissingStyleAttributes:(id)a0;
+ (id)_archivedInstance:(id)a0;

@end
