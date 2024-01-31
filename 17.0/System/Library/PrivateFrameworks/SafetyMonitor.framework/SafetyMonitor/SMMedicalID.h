@class NSUUID, NSString, NSSet;

@interface SMMedicalID : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long age;
@property (readonly, copy, nonatomic) NSString *allergiesAndRestrictions;
@property (readonly, copy, nonatomic) NSString *bloodType;
@property (readonly, nonatomic) long long height;
@property (readonly, copy, nonatomic) NSString *medicalConditions;
@property (readonly, copy, nonatomic) NSString *medicalNotes;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *primaryLanguage;
@property (readonly, nonatomic) long long weight;
@property (readonly, retain, nonatomic) NSSet *emergencyContacts;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 age:(long long)a1 allergiesAndRestrictions:(id)a2 bloodType:(id)a3 height:(long long)a4 medicalConditions:(id)a5 medicalNotes:(id)a6 name:(id)a7 primaryLanguage:(id)a8 weight:(long long)a9 emergencyContacts:(id)a10;

@end
