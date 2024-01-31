@class NSString, INImage, NSArray;

@interface _PSSuggestionProxy : NSObject <NSSecureCoding, ATXSuggestionExecutableProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) INImage *image;
@property (readonly, copy, nonatomic) NSString *interactionRecipients;
@property (readonly, copy, nonatomic) NSString *contactID;
@property (readonly, copy, nonatomic) NSArray *handles;
@property (readonly, copy, nonatomic) NSString *handle;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSString *reasonType;
@property (readonly, nonatomic) BOOL useGroupsWhenFindingRecipient;
@property (readonly, copy, nonatomic) NSString *suggestionKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0 interactionRecipients:(id)a1 contactID:(id)a2 handle:(id)a3 reason:(id)a4 reasonType:(id)a5;
- (id)initWithBundleID:(id)a0 interactionRecipients:(id)a1 contactID:(id)a2 handle:(id)a3 reason:(id)a4 reasonType:(id)a5 groupName:(id)a6 image:(id)a7;
- (id)initWithBundleID:(id)a0 interactionRecipients:(id)a1 contactID:(id)a2 handle:(id)a3 reason:(id)a4 reasonType:(id)a5 image:(id)a6;
- (id)initWithBundleID:(id)a0 interactionRecipients:(id)a1 contactID:(id)a2 handle:(id)a3 reason:(id)a4 reasonType:(id)a5 useGroupsWhenFindingRecipient:(BOOL)a6;
- (id)initWithBundleID:(id)a0 interactionRecipients:(id)a1 contactID:(id)a2 handles:(id)a3 reason:(id)a4 reasonType:(id)a5 useGroupsWhenFindingRecipient:(BOOL)a6 groupName:(id)a7 image:(id)a8;
- (id)initWithBundleID:(id)a0 interactionRecipients:(id)a1 contactID:(id)a2 reason:(id)a3 reasonType:(id)a4;
- (id)initWithBundleID:(id)a0 interactionRecipients:(id)a1 handles:(id)a2 reason:(id)a3 reasonType:(id)a4;

@end
