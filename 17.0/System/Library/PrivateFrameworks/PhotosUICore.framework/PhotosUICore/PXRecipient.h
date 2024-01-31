@class NSString, NSSet, CNContact, PXRecipientTransport;

@interface PXRecipient : NSObject <PXCMMInvitationParticipant, PXFaceTileImageCombinerItem, NSCopying>

@property (readonly, nonatomic) NSString *emailAddressString;
@property (readonly, nonatomic) NSString *phoneNumberString;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXRecipientTransport *suggestedTransport;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSSet *allEmails;
@property (readonly, nonatomic) NSSet *allPhones;
@property (readonly, nonatomic) NSSet *unformattedAllPhones;
@property (readonly, copy, nonatomic) NSString *phoneNumberString;
@property (readonly, copy, nonatomic) NSString *emailAddressString;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) CNContact *contact;

+ (id)new;
+ (id)_contactForAddress:(id)a0 recipientKind:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)px_requestImageWithTargetSize:(struct CGSize { double x0; double x1; })a0 displayScale:(double)a1 isRTL:(BOOL)a2 resultHandler:(id /* block */)a3;
- (id)initWithAddress:(id)a0 nameComponents:(id)a1 recipientKind:(long long)a2;
- (id)initWithContact:(id)a0 address:(id)a1 nameComponents:(id)a2 recipientKind:(long long)a3;
- (id)initWithEmailAddress:(id)a0 phoneNumber:(id)a1 nameComponents:(id)a2;

@end
