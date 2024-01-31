@class NSString, IMBlockListPerson, CNContact;

@interface IMBlockListItem : NSObject

@property (retain, nonatomic) IMBlockListPerson *person;
@property (retain, nonatomic) NSString *address;
@property (nonatomic) void *cmfItem;
@property (retain, nonatomic) NSString *cachedFormattedHandle;
@property (retain, nonatomic) NSString *cachedFormattedPersonName;
@property (readonly, nonatomic) CNContact *cnPerson;

- (void)dealloc;
- (id)fullName;
- (void).cxx_destruct;
- (id)formattedAddress;
- (id)formattedHandle;
- (id)initWithCNContact:(id)a0 address:(id)a1 cmfItemRef:(void *)a2;
- (id)initWithPerson:(id)a0 address:(id)a1 cmfItemRef:(void *)a2;
- (BOOL)isEqualToBlockListItem:(id)a0;
- (void)lookupPerson;

@end
