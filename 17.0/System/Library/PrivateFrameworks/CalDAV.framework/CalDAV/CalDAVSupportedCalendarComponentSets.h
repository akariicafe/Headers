@class NSMutableSet;

@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem {
    NSMutableSet *_componentSets;
}

+ (BOOL)allowedCalendars:(id)a0 contains:(id)a1;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyParseRules;
- (id)componentsAsString;
- (id)childrenToWrite;
- (void)addCompSet:(id)a0;

@end
