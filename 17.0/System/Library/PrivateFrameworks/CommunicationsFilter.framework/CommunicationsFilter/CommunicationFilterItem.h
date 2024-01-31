@class NSString;

@interface CommunicationFilterItem : NSObject

@property (readonly, nonatomic) struct __CFPhoneNumber { } *phoneNumber;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *unformattedID;

- (void)dealloc;
- (id)initWithEmailAddress:(id)a0;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isPhoneNumber;
- (id)initWithPhoneNumber:(struct __CFPhoneNumber { } *)a0;
- (BOOL)_acceptVersion:(id)a0;
- (BOOL)_acceptItemType:(id)a0;
- (id)_dictionaryRepresentationWithRedaction;
- (BOOL)matchesFilterItem:(id)a0;

@end
