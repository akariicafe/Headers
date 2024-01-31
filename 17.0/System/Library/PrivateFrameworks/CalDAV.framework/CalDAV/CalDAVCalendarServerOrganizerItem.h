@class CoreDAVLeafItem, CoreDAVHrefItem;

@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVHrefItem *href;
@property (retain, nonatomic) CoreDAVLeafItem *commonName;

- (id)init;
- (void).cxx_destruct;
- (id)copyParseRules;

@end
