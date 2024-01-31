@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAllowedSharingModesItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *canBePublished;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *canBeShared;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *isMarkedUndeletable;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *isMarkedImmutableSharees;

- (id)init;
- (void).cxx_destruct;
- (id)copyParseRules;

@end
