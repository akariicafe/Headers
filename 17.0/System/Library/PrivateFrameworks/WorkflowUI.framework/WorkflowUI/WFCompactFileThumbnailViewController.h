@class WFFileType, NSString;

@interface WFCompactFileThumbnailViewController : WFCompactThumbnailViewController <UIPointerInteractionDelegate>

@property (readonly, nonatomic) WFFileType *fileType;
@property (readonly, nonatomic) NSString *filename;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (double)contentHeightForWidth:(double)a0;
- (id)initWithFileType:(id)a0 filename:(id)a1;

@end
