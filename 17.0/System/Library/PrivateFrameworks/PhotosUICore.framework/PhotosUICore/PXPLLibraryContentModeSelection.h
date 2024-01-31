@interface PXPLLibraryContentModeSelection : NSObject

+ (int)contentModeForNavigationDestination:(id)a0;
+ (int)getPersistedLibraryContentModeSelection;
+ (BOOL)hasPersistedLibraryContentModeSelection;
+ (int)launchContentModeForNavigationDestination:(id)a0;
+ (void)setPersistedLibraryContentModeSelection:(int)a0;

@end
