@class NSString, NSDictionary, NSArray, NSNumber, INImage;

@interface _PSSuggestion : NSObject <NSSecureCoding, ATXSuggestionExecutableProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *derivedIntentIdentifier;
@property (copy, nonatomic) NSString *messagesGroupIdentifier;
@property (readonly, copy, nonatomic) NSNumber *score;
@property (readonly, nonatomic) BOOL familySuggestion;
@property (retain, nonatomic) INImage *image;
@property (nonatomic) BOOL isAdaptedModelCreated;
@property (nonatomic) BOOL isAdaptedModelUsed;
@property (retain, nonatomic) NSString *adaptedModelRecipeID;
@property (retain, nonatomic) NSString *supportedBundleIDs;
@property (retain, nonatomic) NSString *utiList;
@property (retain, nonatomic) NSDictionary *modelSuggestionProxies;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *reasonType;
@property (copy, nonatomic) NSString *trialID;
@property (readonly, copy, nonatomic) NSString *conversationIdentifier;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSArray *recipients;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL isReturnToSender;
@property (nonatomic) long long suggestionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suggestionForBundleID:(id)a0 derivedIntentIdentifier:(id)a1 knowledgeStore:(id)a2 contactResolver:(id)a3 reason:(id)a4 reasonType:(id)a5;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0 conversationIdentifier:(id)a1 groupName:(id)a2 recipients:(id)a3;
- (id)initWithBundleID:(id)a0 conversationIdentifier:(id)a1 groupName:(id)a2 recipients:(id)a3 derivedIntentIdentifier:(id)a4 image:(id)a5 reason:(id)a6 reasonType:(id)a7 score:(id)a8 familySuggestion:(BOOL)a9;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 conversationIdentifier:(id)a1 groupName:(id)a2 recipients:(id)a3 derivedIntentIdentifier:(id)a4 image:(id)a5 reason:(id)a6 reasonType:(id)a7 score:(id)a8;
- (id)initWithBundleID:(id)a0 conversationIdentifier:(id)a1 groupName:(id)a2 recipients:(id)a3 reason:(id)a4 reasonType:(id)a5 score:(id)a6;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundleID:(id)a0 conversationIdentifier:(id)a1 groupName:(id)a2 recipients:(id)a3 reason:(id)a4 reasonType:(id)a5;
- (id)initWithCoder:(id)a0;

@end
