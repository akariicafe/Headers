@interface CalDAVCalendarServerCollectionUpdatesElement : CalDAVCalendarServerResourceChangeElement

@property (readonly, nonatomic) int state;

- (void)setUnpublish:(id)a0;
- (id)copyParseRules;
- (void)setPublish:(id)a0;

@end
