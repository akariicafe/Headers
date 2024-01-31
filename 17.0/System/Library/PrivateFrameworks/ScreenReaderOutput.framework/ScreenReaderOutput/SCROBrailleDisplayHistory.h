@interface SCROBrailleDisplayHistory : NSObject {
    struct __CFArray { } *_announcements;
    struct __CFArray { } *_unreadSnapshot;
    long long _currentIndex;
    long long _unreadCount;
}

+ (void)initialize;

- (id)init;
- (void)addString:(id)a0;
- (void)dealloc;
- (BOOL)_moveIndexBy:(long long)a0;
- (id)currentString;
- (BOOL)hasUnread;
- (BOOL)isOnMostRecent;
- (void)markSnapshotAsRead;
- (void)moveToMostRecent;
- (BOOL)moveToNext;
- (BOOL)moveToPrevious;
- (void)snapshotUnread;

@end
