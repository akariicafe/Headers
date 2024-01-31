@class CoreDAVLeafItem, CoreDAVItem;

@interface CalDAVCalendarServerNotificationItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *dtstamp;
@property (retain, nonatomic) CoreDAVItem *content;

- (id)init;
- (void).cxx_destruct;
- (id)copyParseRules;

@end
