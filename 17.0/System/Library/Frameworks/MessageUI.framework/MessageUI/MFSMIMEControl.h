@protocol MFSMIMEControlDelegate;

@interface MFSMIMEControl : UIControl

@property (weak, nonatomic) id<MFSMIMEControlDelegate> delegate;
@property (readonly, nonatomic) BOOL canPresentMenu;

- (struct CGPoint { double x0; double x1; })menuAttachmentPointForConfiguration:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)_goToSettingsAction;
- (id)menuWithOptions:(unsigned long long)a0;

@end
