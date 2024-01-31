@class NSString, NSURL, ICSDateValue;

@interface CalDAVUpdateOwnerItem : CoreDAVItem

@property (retain, nonatomic) ICSDateValue *dtstamp;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSURL *address;
@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *phoneNumber;

- (id)description;
- (void).cxx_destruct;
- (id)copyParseRules;
- (void)setAddressItem:(id)a0;
- (void)setDtstampItem:(id)a0;
- (void)setDisplayNameItem:(id)a0;
- (void)setEmailAddressItem:(id)a0;
- (void)setFirstNameItem:(id)a0;
- (void)setLastNameItem:(id)a0;
- (void)setPhoneNumberItem:(id)a0;

@end
