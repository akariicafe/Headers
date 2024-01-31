@class FBKURLExtension, DEDAttachmentGroup, DEDAttachmentItem, NSString, NSURL, DEDExtension, FBKMatcherPredicate;

@interface FBKAttachment : NSObject <FBKDiffableObject>

@property (retain, nonatomic) DEDAttachmentGroup *attachedGroup;
@property (retain, nonatomic) DEDAttachmentItem *attachedItem;
@property (nonatomic) long long attachmentType;
@property (retain, nonatomic) NSString *deviceUUID;
@property (retain, nonatomic) NSURL *originalLocalFileURL;
@property (readonly) NSString *uniqueIdentifier;
@property (retain, nonatomic) FBKMatcherPredicate *requirement;
@property (retain, nonatomic) DEDExtension *extension;
@property (retain, nonatomic) FBKURLExtension *urlExtension;
@property (nonatomic) BOOL fileComesFromFBK;
@property (readonly, nonatomic) BOOL wasAttachedByApplication;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSString *stateDescription;
@property (retain, nonatomic) NSString *placeholderText;
@property (retain, nonatomic) NSString *proposedFileNameForLocalFiles;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *collectorIdentifier;
@property (readonly, nonatomic) NSString *instructionsAsHTML;
@property (retain, nonatomic) NSString *localizedAttachmentInfo;

+ (id)descriptorForAttachment:(id)a0 given:(id)a1;

- (void)remove;
- (id)group;
- (void)setGroup:(id)a0;
- (id)shortDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isRequired;
- (id)displayName;
- (BOOL)isLocal;
- (id)item;
- (BOOL)hasGroup;
- (BOOL)canBeDeleted;
- (BOOL)canStartGathering;
- (id)diffableHashWithContext:(id)a0;
- (BOOL)hasFBKFileReadyForSubmission;
- (BOOL)hasFiles;
- (id)initWithCollectorIdentifier:(id)a0 deviceUUID:(id)a1;
- (id)initWithRequirement:(id)a0 urlExtension:(id)a1 collectorIdentifier:(id)a2 deviceUUID:(id)a3;
- (BOOL)isAdditional;
- (BOOL)isCollecting;
- (BOOL)isReadyToDisplayContents;
- (BOOL)matchesAttachmentDescriptor:(id)a0;
- (id)promisedFileName;
- (void)setItem:(id)a0 originalURL:(id)a1;
- (BOOL)shouldAutoGather;

@end
