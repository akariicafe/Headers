@class NSString, CNContact, NSArray, CNAutocompleteResult;

@interface TUProxyAutocompleteResult : NSObject <TUSearchResult>

@property (retain, nonatomic) CNAutocompleteResult *autocompleteResult;
@property (readonly) NSString *displayName;
@property (readonly) NSString *callerId;
@property (readonly) CNContact *backingContact;
@property (readonly) NSString *backingContactId;
@property (readonly) NSString *backingContactIdentifier;
@property (readonly) NSString *destinationId;
@property (readonly) NSString *isoCountryCode;
@property (readonly) NSArray *handles;
@property (readonly) long long mostRecentCallType;
@property (readonly) BOOL mostRecentCallWasMissed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSArray *idsCanonicalDestinations;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAutocompleteResult:(id)a0;

@end
