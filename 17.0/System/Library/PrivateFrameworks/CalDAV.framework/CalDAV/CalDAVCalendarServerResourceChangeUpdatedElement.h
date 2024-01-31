@class CoreDAVItem, NSMutableSet;

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement

@property (nonatomic) BOOL content;
@property (retain, nonatomic) CoreDAVItem *prop;
@property (retain, nonatomic) NSMutableSet *calendarChanges;

- (id)init;
- (void)addContentItem:(id)a0;
- (void).cxx_destruct;
- (id)copyParseRules;
- (void)addCalendarChange:(id)a0;

@end
