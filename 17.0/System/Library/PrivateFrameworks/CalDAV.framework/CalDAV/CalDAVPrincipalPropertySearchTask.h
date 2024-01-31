@class NSSet, CalDAVPrincipalSearchPropertySet;

@interface CalDAVPrincipalPropertySearchTask : CoreDAVPrincipalPropertySearchTask

@property (retain, nonatomic) NSSet *searchTypes;
@property (retain, nonatomic) NSSet *searchStrings;
@property (retain, nonatomic) CalDAVPrincipalSearchPropertySet *serverSupportSet;
@property (retain, nonatomic) id searchContext;

- (id)searchItems;
- (id)extraAttributes;
- (void).cxx_destruct;
- (id)initWithSearchStrings:(id)a0 searchTypes:(id)a1 serverSupportSet:(id)a2 atURL:(id)a3;

@end
