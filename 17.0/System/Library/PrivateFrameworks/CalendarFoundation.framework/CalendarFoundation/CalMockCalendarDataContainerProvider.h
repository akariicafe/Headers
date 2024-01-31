@class NSString, NSURL, NSDictionary;

@interface CalMockCalendarDataContainerProvider : NSObject <CalCalendarDataContainerProvider, NSSecureCoding> {
    NSURL *_calendarDataContainerURL;
    NSDictionary *_accountsWithSpecificContainers;
    NSDictionary *_personaIDsByContainer;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)containerInfoForPersonaIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)containerForAccountIdentifier:(id)a0;
- (BOOL)accountUsesDataSeparatedContainer:(id)a0;
- (id)containerInfoForAccountIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAccountDataContainerMap:(id)a0 defaultDataContainer:(id)a1;
- (id)initWithCalendarDataContainerURL:(id)a0;
- (id)personaForAccountIdentifier:(id)a0;

@end
