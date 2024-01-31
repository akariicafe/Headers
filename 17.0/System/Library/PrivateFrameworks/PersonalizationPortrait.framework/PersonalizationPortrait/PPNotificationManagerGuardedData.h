@class CNContactStore, EKCalendarVisibilityManager, PPNotificationHandler, EKEventStore;
@protocol SGSuggestionsServiceContactsProtocol, NSObject;

@interface PPNotificationManagerGuardedData : NSObject {
    PPNotificationHandler *_contactsHandler;
    id<NSObject> _contactsToken;
    CNContactStore *_cnStore;
    PPNotificationHandler *_meCardHandler;
    id<NSObject> _meCardToken;
    id<NSObject> _meCardDonationToken;
    PPNotificationHandler *_portraitChangeHandler;
    int _portraitChangeToken;
    PPNotificationHandler *_portraitInvalidationHandler;
    int _portraitInvalidationToken;
    PPNotificationHandler *_eventKitHandler;
    id<NSObject> _eventKitToken;
    EKEventStore *_ekStore;
    PPNotificationHandler *_calendarHandler;
    EKCalendarVisibilityManager *_calendarVisibilityManager;
    id<SGSuggestionsServiceContactsProtocol> _suggestionsService;
    PPNotificationHandler *_suggestionsHandler;
    id _suggestionsToken;
}

- (id)description;
- (void).cxx_destruct;

@end
