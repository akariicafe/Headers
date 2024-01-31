@class FBKAttachment, UIImageView, NSString, UILabel, NSLayoutConstraint;

@interface FBKAttachmentCell : UITableViewCell <FBKDiffableCell>

@property (retain, nonatomic) UILabel *accessoryLabel;
@property (retain, nonatomic) UILabel *doneLabel;
@property (weak, nonatomic) NSLayoutConstraint *superviewToImageSpacing;
@property (weak, nonatomic) NSLayoutConstraint *attachmentLabelSpacingToSuperview;
@property (nonatomic) long long gatherState;
@property (nonatomic) long long attachmentType;
@property (nonatomic) BOOL showsIcon;
@property (nonatomic) BOOL showsFileSize;
@property (retain, nonatomic) FBKAttachment *attachment;
@property (weak, nonatomic) UILabel *attachmentDisplayName;
@property (weak, nonatomic) UIImageView *attachmentIcon;
@property (retain, nonatomic) NSString *itemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)setAccessoryText:(id)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)showButtonState;
- (void)showDeferredState;
- (void)showDownloadNotPermittedState;
- (void)showDownloadUnavailableState;
- (void)showFailedToGatherState;
- (void)showGatheredState;
- (void)showGatheringState;
- (void)showNotGatheredState;
- (void)showUnsatisfiedState;
- (void)updateAccessibilityLabel;
- (void)updateCell;
- (void)updateContentInsetWithValue:(double)a0;
- (void)updateDeferredStateWith:(id)a0;
- (void)updateSuperviewToAttachmentLabelSpacing:(double)a0;

@end
