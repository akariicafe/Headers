@class CoreDAVItemWithNoChildren, NSMutableArray;

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableArray *emailAddresses;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (id)init;
- (void)addEmailAddress:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
