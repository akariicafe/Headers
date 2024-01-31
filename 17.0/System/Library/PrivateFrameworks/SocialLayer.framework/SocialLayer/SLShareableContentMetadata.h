@class LPLinkMetadata, NSString, NSArray, NSURL, NSPersonNameComponents;

@interface SLShareableContentMetadata : NSObject <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sceneIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *representations;
@property (readonly, nonatomic) LPLinkMetadata *metadata;
@property (readonly, nonatomic) NSURL *highlightURL;
@property (copy, nonatomic) NSString *initiatorHandle;
@property (retain, nonatomic) NSPersonNameComponents *initiatorNameComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSceneIdentifier:(id)a0 bundleIdentifier:(id)a1 representations:(id)a2 metadata:(id)a3 highlightURL:(id)a4;

@end
