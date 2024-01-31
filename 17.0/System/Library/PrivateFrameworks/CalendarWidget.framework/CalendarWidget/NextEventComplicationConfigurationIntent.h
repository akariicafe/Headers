@class NSNumber, NSArray;

@interface NextEventComplicationConfigurationIntent : INIntent

@property (nonatomic, retain) NSNumber *mirrorCalendarApp;
@property (nonatomic, copy) NSArray *calendars;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
