@class NSData;

@interface SCROBrailleDisplayManagerStatus : NSObject

@property (retain, nonatomic) NSData *aggregatedData;
@property (nonatomic) int virtualAlignment;
@property (nonatomic) long long masterStatusCellIndex;
@property (nonatomic) BOOL currentAnnouncementUnread;
@property (nonatomic) BOOL anyUnreadAnnouncements;

- (void).cxx_destruct;

@end
