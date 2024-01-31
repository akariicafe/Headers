@class EKSource, NSString, NSArray, EKEventStore, CalDarwinNotificationListener;

@interface EKCalendarVisibilityManager : NSObject <CalActivatable, CADCalendarVisibilityManager>

@property (class, readonly, nonatomic) NSString *visibilityChangedNotificationName;
@property (class, readonly, nonatomic) NSString *focusModeConfigurationChangedName;
@property (class, readonly, nonatomic) NSArray *deselectedCalendarIdentifiers;
@property (class, copy, nonatomic) NSArray *unselectedCalendarIdentifiersForFocusMode;

@property (readonly, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) id /* block */ visibilityChangedCallback;
@property (readonly, nonatomic) CalDarwinNotificationListener *notificationListener;
@property BOOL active;
@property (readonly, nonatomic) NSArray *visibleCalendars;
@property (readonly, nonatomic) NSArray *visibleCalendarsForAllIdentities;
@property (readonly, nonatomic) NSArray *invisibleCalendarsForAllIdentities;
@property (readonly, nonatomic) NSArray *invisibleCalendars;
@property (readonly, nonatomic) EKSource *limitedToSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultQueue;
+ (id)unselectedCalendarsForFocusModeInEventStore:(id)a0;

- (id)initWithEventStore:(id)a0 limitedToSource:(id)a1 visibilityChangedCallback:(id /* block */)a2;
- (void)dealloc;
- (id)initWithEventStore:(id)a0 limitedToSource:(id)a1 visibilityChangedCallback:(id /* block */)a2 queue:(id)a3;
- (id)initWithEventStore:(id)a0 limitedToSource:(id)a1 visibilityChangedCallback:(id /* block */)a2 queue:(id)a3 activate:(BOOL)a4;
- (id)initWithEventStore:(id)a0 visibilityChangedCallback:(id /* block */)a1;
- (void)activate;
- (id)_deselectedCalendarIdentifiers;
- (void).cxx_destruct;
- (void)deactivate;
- (id)initWithEventStore:(id)a0 visibilityChangedCallback:(id /* block */)a1 queue:(id)a2;
- (id)_calendarsThatAreVisible:(BOOL)a0 filteredByIdentity:(BOOL)a1;

@end
