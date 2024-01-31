@class IMHandle, NSHashTable;

@interface IMUnavailabilityIndicatorChatItem : IMTranscriptChatItem

@property (retain, nonatomic) NSHashTable *unavailabilityIndicatorChatItemDelegates;
@property (readonly, nonatomic) IMHandle *handle;
@property (nonatomic) BOOL displayNotifyAnywayButton;

- (void).cxx_destruct;
- (void)addUnavailabilityIndicatorChatItemDelegate:(id)a0;
- (id)_initWithHandle:(id)a0 displayNotifyAnywayButton:(BOOL)a1;
- (void)_notifyDelegatesOfStateChange;

@end
