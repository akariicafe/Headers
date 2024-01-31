@class NSDate, NSMutableDictionary, CNContact, ATXLocationManager, CNContactStore, EKEventStore, MTAlarmManager, CNFavorites;

@interface ATXHeuristicDevice : NSObject {
    CNContactStore *_contactStoreLazy;
    CNContact *_meContactLazy;
    BOOL _meContactChecked;
    CNFavorites *_favoriteContactsLazy;
    EKEventStore *_eventStore;
    NSDate *_now;
    NSMutableDictionary *_wrappedObjects;
}

@property (class, readonly, nonatomic) MTAlarmManager *sharedAlarmManager;

@property (readonly, nonatomic) ATXLocationManager *locationManager;
@property (readonly, nonatomic) NSDate *now;
@property (readonly, nonatomic) EKEventStore *eventStore;

- (void)setNow:(id)a0;
- (id)meContact;
- (id)init;
- (id)initWithLocationManager:(id)a0;
- (void)dealloc;
- (id)contactsForPredicate:(id)a0;
- (id)dictForEvent:(id)a0;
- (id)_wrap:(id)a0;
- (id)dictForEvent:(id)a0 contactCache:(id)a1;
- (void)updateMeContact;
- (id)wrap:(id)a0;
- (id)_unwrap:(id)a0;
- (void)accessFavoriteContacts:(id /* block */)a0;
- (id)dictContactForCNContact:(id)a0;
- (id)_contactForPredicate:(id)a0;
- (id)_dictContactForParticipant:(id)a0 contactCache:(id)a1;
- (id)contactForParticipant:(id)a0;
- (void).cxx_destruct;
- (id)_dictForAttachment:(id)a0;
- (id)visibleCalendarsInCurrentFocus;
- (id)organizerContactWithEvent:(id)a0;
- (id)_calendarVisibilityManager;
- (id)_dictContactForIdentifier:(id)a0;
- (id)contactStore;
- (id)_contactKeysToFetch;
- (id)visibleCalendarsRegardlessOfFocus;
- (id)resolveContact:(id)a0;

@end
