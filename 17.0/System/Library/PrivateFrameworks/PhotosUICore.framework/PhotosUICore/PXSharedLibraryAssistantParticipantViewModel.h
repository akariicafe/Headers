@class UIImage, NSString;

@interface PXSharedLibraryAssistantParticipantViewModel : PXObservable

@property (readonly, copy, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;

- (void)performChanges:(id /* block */)a0;
- (id)init;
- (void)setSubtitle:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;

@end
