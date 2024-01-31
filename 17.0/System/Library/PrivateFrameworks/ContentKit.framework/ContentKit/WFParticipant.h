@class NSURL, NSString, NSPredicate;

@interface WFParticipant : NSObject <WFNaming, WFSerializableContent>

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long role;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic, getter=isManaged) BOOL managed;
@property (readonly, nonatomic, getter=isCurrentUser) BOOL currentUser;
@property (readonly, nonatomic) NSPredicate *contactPredicate;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)a0;

- (id)wfSerializedRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithEKParticipant:(id)a0;
- (BOOL)isEquivalentToParticipant:(id)a0;
- (id)initWithURL:(id)a0 name:(id)a1 emailAddress:(id)a2 status:(long long)a3 role:(long long)a4 type:(long long)a5 sourceIdentifier:(id)a6 isManaged:(BOOL)a7 isCurrentUser:(BOOL)a8 contactPredicate:(id)a9;

@end
