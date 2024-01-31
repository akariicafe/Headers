@class NSMutableSet;

@interface CalDAVCalendarServerChangesItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *changedProperties;

- (id)init;
- (void).cxx_destruct;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)a0 andName:(id)a1;
- (void)addChangedProperty:(id)a0;

@end
