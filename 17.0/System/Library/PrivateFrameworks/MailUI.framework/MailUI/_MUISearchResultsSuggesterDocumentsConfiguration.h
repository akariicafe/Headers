@class NSArray, NSString, NSObject;
@protocol OS_os_log;

@interface _MUISearchResultsSuggesterDocumentsConfiguration : NSObject <MUISearchResultsSuggesterConfiguration, EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSArray *fetchAttributes;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) NSString *logIdentifier;
@property (readonly, nonatomic) unsigned long long maxItemCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)processSuggestionsResults:(id)a0 phraseManager:(id)a1 messageList:(id)a2;
- (id)suggestionFilterQueryWithPhraseManager:(id)a0 senderFilterQuery:(id)a1;

@end
