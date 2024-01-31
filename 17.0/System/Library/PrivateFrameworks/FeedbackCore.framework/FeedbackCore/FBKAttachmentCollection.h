@class NSString, NSArray, NSSet, DEDBugSession, FBKAttachmentManager, FBKGroupedDevice;

@interface FBKAttachmentCollection : NSObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) DEDBugSession *bugSession;
@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) BOOL isRequired;
@property (nonatomic, readonly) NSSet *additionalMatchers;
@property (retain, nonatomic) FBKAttachmentManager *attachmentManager;
@property (retain, nonatomic) FBKGroupedDevice *device;

- (void).cxx_destruct;
- (BOOL)hasAnyAttachmentCollectedOrCollecting;
- (id)initWithAttachmentManager:(id)a0 device:(id)a1;
- (BOOL)isAlreadyCollectingThisMatcher:(id)a0 ignoreAdditional:(BOOL)a1;
- (void)replaceEmptyAttachmentsWithAdditionalMatchersWithAdditional:(id)a0;
- (BOOL)replacePreviousAdditionalMatchersWithRequiredMatchersIfNeededWithRequired:(id)a0;
- (id)updateMatcherPredicatesWithUpdatedMatchers:(id)a0 allRequiredMatchers:(id)a1 formPlatform:(id)a2;

@end
