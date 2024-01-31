@class NSURL, NSSet, CalDAVServerVersion;

@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup

@property (retain, nonatomic) NSURL *delegatePrincipalURL;
@property (retain, nonatomic) NSURL *homeURL;
@property (readonly, nonatomic) NSSet *calendarHomes;
@property (readonly, nonatomic) NSSet *preferredUserAddresses;
@property (readonly, nonatomic) NSURL *inboxURL;
@property (readonly, nonatomic) NSURL *outboxURL;
@property (readonly, nonatomic) NSURL *dropboxURL;
@property (readonly, nonatomic) NSURL *notificationURL;
@property (readonly, nonatomic) NSURL *updatedPrincipalURL;
@property (readonly, nonatomic) CalDAVServerVersion *serverVersion;
@property (readonly, nonatomic) BOOL supportsCalendarUserSearch;

- (void)processPrincipalHeaders:(id)a0;
- (id)homeSet;
- (void)_setPropertiesFromParsedResponses:(id)a0;
- (void)startTaskGroup;
- (BOOL)forceOptionsRequest;
- (id)_copyAccountPropertiesPropFindElements;
- (id)description;
- (void).cxx_destruct;
- (id)userAddresses;

@end
