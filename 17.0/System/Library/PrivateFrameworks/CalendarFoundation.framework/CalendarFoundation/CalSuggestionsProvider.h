@class NSObject;
@protocol SGSuggestionsServiceEventsProtocol;

@interface CalSuggestionsProvider : NSObject

@property (nonatomic) BOOL suggestionsFrameworkAvailable;
@property (retain, nonatomic) NSObject<SGSuggestionsServiceEventsProtocol> *service;

+ (id)defaultProvider;

- (id)init;
- (void).cxx_destruct;
- (id)senderForEventWithSuggestionID:(id)a0;
- (void)_loadSuggestionsFramework;
- (void)confirmEventWithSuggestionID:(id)a0;
- (void)confirmSGEventWithRecordID:(id)a0;
- (BOOL)eventsFoundInMailEnabled;
- (id)fakeSGRecordID;
- (void)rejectSGEventWithRecordID:(id)a0;
- (id)sgEventFromUniqueID:(id)a0 error:(id *)a1;
- (id)sgRecordIDForEventWithSuggestionID:(id)a0 error:(id *)a1;

@end
