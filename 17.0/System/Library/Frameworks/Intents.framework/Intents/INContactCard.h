@class NSString, NSArray, NSPersonNameComponents, NSDateComponents, INImage;

@interface INContactCard : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, nonatomic) BOOL isMe;
@property (readonly, copy, nonatomic) INImage *image;
@property (readonly, copy, nonatomic) NSString *organizationName;
@property (readonly, copy, nonatomic) NSString *departmentName;
@property (readonly, copy, nonatomic) NSString *jobTitle;
@property (readonly, copy, nonatomic) NSArray *phoneNumbers;
@property (readonly, copy, nonatomic) NSArray *emailAddresses;
@property (readonly, copy, nonatomic) NSArray *postalAddresses;
@property (readonly, copy, nonatomic) NSArray *urlAddresses;
@property (readonly, copy, nonatomic) NSArray *contactRelations;
@property (readonly, copy, nonatomic) NSArray *instantMessageAddresses;
@property (readonly, copy, nonatomic) NSDateComponents *birthday;
@property (readonly, copy, nonatomic) NSArray *dates;

+ (id)initWithContactIdentifier:(id)a0 nameComponents:(id)a1 isMe:(BOOL)a2 image:(id)a3 organizationName:(id)a4 departmentName:(id)a5 jobTitle:(id)a6 phoneNumbers:(id)a7 emailAddresses:(id)a8 postalAddresses:(id)a9 urlAddresses:(id)a10 contactRelations:(id)a11 instantMessageAddresses:(id)a12 birthday:(id)a13 dates:(id)a14;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContactIdentifier:(id)a0 nameComponents:(id)a1 isMe:(BOOL)a2 image:(id)a3 organizationName:(id)a4 departmentName:(id)a5 jobTitle:(id)a6 phoneNumbers:(id)a7 emailAddresses:(id)a8 postalAddresses:(id)a9 urlAddresses:(id)a10 contactRelations:(id)a11 instantMessageAddresses:(id)a12 birthday:(id)a13 dates:(id)a14;

@end
