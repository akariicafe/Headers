@class NSString;

@interface PXPeoplePickerMockPerson : PHPerson

@property (retain, nonatomic) NSString *mockName;
@property (retain, nonatomic) NSString *mockLocalIdentifier;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)localIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocalIdentifier:(id)a0 displayName:(id)a1;
- (id)px_localizedName;

@end
