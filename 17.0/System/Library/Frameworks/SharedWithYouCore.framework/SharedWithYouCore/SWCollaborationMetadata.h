@class NSData, UTType, NSArray, NSDate, NSString, SWCollaborationShareOptions, NSDictionary, NSPersonNameComponents, CKContainerSetupInfo;

@interface SWCollaborationMetadata : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *defaultOptions;
@property (copy, nonatomic) NSArray *userSelectedOptions;
@property (copy, nonatomic) NSArray *ckAppBundleIDs;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) UTType *contentType;
@property (copy, nonatomic) NSDictionary *handleToIdentityMap;
@property (retain, nonatomic) NSString *originatingBundleIdentifier;
@property (copy, nonatomic) NSString *collaborationIdentifier;
@property (retain, nonatomic) CKContainerSetupInfo *containerSetupInfo;
@property (retain, nonatomic) NSData *sourceProcessData;
@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) SWCollaborationShareOptions *defaultShareOptions;
@property (copy, nonatomic) SWCollaborationShareOptions *userSelectedShareOptions;
@property (copy, nonatomic) NSString *initiatorHandle;
@property (retain, nonatomic) NSPersonNameComponents *initiatorNameComponents;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToCollaborationMetadata:(id)a0;
- (void)_commonInitWithLocalIdentifier:(id)a0 collaborationIdentifier:(id)a1 title:(id)a2 defaultShareOptions:(id)a3 defaultOptions:(id)a4 creationDate:(id)a5 contentType:(id)a6 initiatorHandle:(id)a7 initiatorNameComponents:(id)a8 ckAppBundleIDs:(id)a9 handleToIdentityMap:(id)a10 containerSetupInfo:(id)a11 sourceProcessData:(id)a12;
- (id)initWithCollaborationIdentifier:(id)a0;
- (id)initWithCollaborationIdentifier:(id)a0 title:(id)a1 defaultOptions:(id)a2;
- (id)initWithCollaborationIdentifier:(id)a0 title:(id)a1 defaultOptions:(id)a2 creationDate:(id)a3 contentType:(id)a4;
- (id)initWithCollaborationIdentifier:(id)a0 title:(id)a1 defaultOptions:(id)a2 creationDate:(id)a3 contentType:(id)a4 ckAppBundleIDs:(id)a5;
- (id)initWithCollaborationIdentifier:(id)a0 title:(id)a1 defaultOptions:(id)a2 creationDate:(id)a3 contentType:(id)a4 ckAppBundleIDs:(id)a5 initiatorHandle:(id)a6 initiatorNameComponents:(id)a7;
- (id)initWithCollaborationIdentifier:(id)a0 title:(id)a1 defaultOptions:(id)a2 creationDate:(id)a3 contentType:(id)a4 containerSetupInfo:(id)a5;
- (id)initWithCollaborationIdentifier:(id)a0 title:(id)a1 defaultOptions:(id)a2 creationDate:(id)a3 contentType:(id)a4 initiatorHandle:(id)a5 initiatorNameComponents:(id)a6;
- (id)initWithCollaborationIdentifier:(id)a0 title:(id)a1 defaultOptions:(id)a2 initiatorHandle:(id)a3 initiatorNameComponents:(id)a4;
- (id)initWithCollaborationIdentifier:(id)a0 title:(id)a1 defaultOptions:(id)a2 initiatorHandle:(id)a3 initiatorNameComponents:(id)a4 containerSetupInfo:(id)a5;
- (id)initWithCollaborationIdentifier:(id)a0 title:(id)a1 defaultShareOptions:(id)a2;
- (id)initWithCollaborationIdentifier:(id)a0 title:(id)a1 defaultShareOptions:(id)a2 creationDate:(id)a3 contentType:(id)a4;
- (id)initWithCollaborationIdentifier:(id)a0 title:(id)a1 defaultShareOptions:(id)a2 creationDate:(id)a3 contentType:(id)a4 ckAppBundleIDs:(id)a5;
- (id)initWithCollaborationIdentifier:(id)a0 title:(id)a1 defaultShareOptions:(id)a2 creationDate:(id)a3 contentType:(id)a4 ckAppBundleIDs:(id)a5 initiatorHandle:(id)a6 initiatorNameComponents:(id)a7;
- (id)initWithCollaborationIdentifier:(id)a0 title:(id)a1 defaultShareOptions:(id)a2 creationDate:(id)a3 contentType:(id)a4 initiatorHandle:(id)a5 initiatorNameComponents:(id)a6;
- (id)initWithCollaborationIdentifier:(id)a0 title:(id)a1 defaultShareOptions:(id)a2 creationDate:(id)a3 contentType:(id)a4 initiatorHandle:(id)a5 initiatorNameComponents:(id)a6 containerSetupInfo:(id)a7 sourceProcessData:(id)a8;
- (id)initWithCollaborationIdentifier:(id)a0 title:(id)a1 defaultShareOptions:(id)a2 initiatorHandle:(id)a3 initiatorNameComponents:(id)a4;
- (id)initWithCollaborationIdentifier:(id)a0 title:(id)a1 defaultShareOptions:(id)a2 initiatorHandle:(id)a3 initiatorNameComponents:(id)a4 containerSetupInfo:(id)a5;
- (id)initWithCollaborationIdentifier:(id)a0 title:(id)a1 defaultShareOptions:(id)a2 initiatorHandle:(id)a3 initiatorNameComponents:(id)a4 containerSetupInfo:(id)a5 sourceProcessData:(id)a6;
- (id)initWithLocalIdentifier:(id)a0;
- (id)initWithLocalIdentifier:(id)a0 collaborationIdentifier:(id)a1 title:(id)a2 defaultOptions:(id)a3;
- (id)initWithLocalIdentifier:(id)a0 collaborationIdentifier:(id)a1 title:(id)a2 defaultOptions:(id)a3 creationDate:(id)a4 contentType:(id)a5 ckAppBundleIDs:(id)a6;
- (id)initWithLocalIdentifier:(id)a0 collaborationIdentifier:(id)a1 title:(id)a2 defaultOptions:(id)a3 creationDate:(id)a4 contentType:(id)a5 ckAppBundleIDs:(id)a6 initiatorHandle:(id)a7 initiatorNameComponents:(id)a8;
- (id)initWithLocalIdentifier:(id)a0 collaborationIdentifier:(id)a1 title:(id)a2 defaultOptions:(id)a3 initiatorHandle:(id)a4 initiatorNameComponents:(id)a5;
- (id)initWithLocalIdentifier:(id)a0 collaborationIdentifier:(id)a1 title:(id)a2 defaultShareOptions:(id)a3;
- (id)initWithLocalIdentifier:(id)a0 collaborationIdentifier:(id)a1 title:(id)a2 defaultShareOptions:(id)a3 creationDate:(id)a4 contentType:(id)a5 ckAppBundleIDs:(id)a6;
- (id)initWithLocalIdentifier:(id)a0 collaborationIdentifier:(id)a1 title:(id)a2 defaultShareOptions:(id)a3 creationDate:(id)a4 contentType:(id)a5 ckAppBundleIDs:(id)a6 initiatorHandle:(id)a7 initiatorNameComponents:(id)a8;
- (id)initWithLocalIdentifier:(id)a0 collaborationIdentifier:(id)a1 title:(id)a2 defaultShareOptions:(id)a3 creationDate:(id)a4 contentType:(id)a5 ckAppBundleIDs:(id)a6 initiatorHandle:(id)a7 initiatorNameComponents:(id)a8 containerSetupInfo:(id)a9 sourceProcessData:(id)a10;
- (id)initWithLocalIdentifier:(id)a0 collaborationIdentifier:(id)a1 title:(id)a2 defaultShareOptions:(id)a3 defaultOptions:(id)a4 creationDate:(id)a5 contentType:(id)a6 initiatorHandle:(id)a7 initiatorNameComponents:(id)a8 ckAppBundleIDs:(id)a9 handleToIdentityMap:(id)a10 containerSetupInfo:(id)a11 sourceProcessData:(id)a12;
- (id)initWithLocalIdentifier:(id)a0 collaborationIdentifier:(id)a1 title:(id)a2 defaultShareOptions:(id)a3 initiatorHandle:(id)a4 initiatorNameComponents:(id)a5;

@end
