@class NSString, NSDate;

@interface CUIKUserActivityCalendarEvent : CUIKUserActivityWithSource {
    NSString *_externalID;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_location;
    NSString *_relatedUniqueIdentifier;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long view;

- (id)dictionary;
- (id)initWithEvent:(id)a0 view:(unsigned long long)a1;
- (id)initWithDictionary:(id)a0;
- (id)initWithEvent:(id)a0 view:(unsigned long long)a1 forceLocal:(BOOL)a2;
- (void).cxx_destruct;
- (id)eventFromStore:(id)a0;
- (void)updateActivity:(id)a0;

@end
