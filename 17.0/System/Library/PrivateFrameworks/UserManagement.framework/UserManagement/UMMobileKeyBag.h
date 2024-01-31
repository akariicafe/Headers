@class UMUser;

@interface UMMobileKeyBag : NSObject

@property (class, readonly, nonatomic) UMUser *lastLoggedInUser;

+ (id)allSyncBubbleUsers;
+ (id)queuedSyncBubbleUsers;
+ (void)initialize;
+ (BOOL)stopSyncBubbleForUser:(id)a0 outError:(id *)a1;
+ (id)currentSyncBubbleUser;
+ (BOOL)startSyncBubbleForUser:(id)a0 outError:(id *)a1;
+ (id)syncBubbleMachServiceNamesForUser:(id)a0;
+ (BOOL)clearSyncBubblesWithOutError:(id *)a0;

@end
