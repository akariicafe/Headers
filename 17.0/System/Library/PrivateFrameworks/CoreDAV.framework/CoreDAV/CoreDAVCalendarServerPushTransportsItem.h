@class NSMutableSet;

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *transports;

+ (id)copyParseRules;

- (id)init;
- (void)addTransport:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
