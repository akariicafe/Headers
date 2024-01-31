@class NSString, NSNumberFormatter, NCNotificationSummaryBuilder, NSMutableArray;

@interface NCNotificationRequestCoalescingContentProvider : NCNotificationRequestContentProvider {
    NSNumberFormatter *_decimalFormatter;
    NCNotificationSummaryBuilder *_summaryBuilder;
}

@property (retain, nonatomic) NSMutableArray *coalescedNotificationRequests;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated;
@property (retain, nonatomic) NCNotificationSummaryBuilder *overridenSummaryBuilder;
@property (copy, nonatomic) NSString *collapsedSectionSummaryString;
@property (nonatomic) BOOL showSummaryFooterText;
@property (nonatomic) BOOL showSummaryTextAsContent;

- (id)communicationAvatar;
- (id)initWithNotificationRequest:(id)a0;
- (id)footerText;
- (BOOL)isHidingContent;
- (id)notificationRequest;
- (void)removeCoalescedNotificationRequest:(id)a0;
- (id)init;
- (id)importantText;
- (id)primarySubtitleText;
- (unsigned long long)_indexOfMatchingNotificationRequest:(id)a0;
- (id)inlineAction;
- (unsigned long long)coalesceCount;
- (id)primaryText;
- (id)summaryText;
- (id)icons;
- (id)_placeholderSecondaryText;
- (void)_updateSummaryText;
- (BOOL)_shouldShowNotificationBody;
- (id)secondaryText;
- (void)coalesceNotificationRequest:(id)a0;
- (BOOL)containsMatchingCoalescedNotificationRequest:(id)a0;
- (id)thumbnail;
- (unsigned long long)_notificationCount;
- (id)_localizedStringWithPlaceholderFormat:(id)a0 count:(unsigned long long)a1;
- (id)date;
- (void).cxx_destruct;
- (void)updateCoalescedNotificationRequest:(id)a0;
- (id)_activeSummaryBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
