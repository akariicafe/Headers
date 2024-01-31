@class AVTUILogger, NSString, AVTSimpleAvatarPicker, UIView, AVTUIEnvironment, AVTAvatarStore;
@protocol AVTPresenterDelegate, AVTAvatarPickerDelegate, AVTSimpleAvatarPickerSwiftProviderDelegate, NSObject;

@interface AVTSimpleAvatarPickerSwiftProvider : NSObject <AVTPresenterDelegate, AVTAvatarPicker, AVTAvatarPickerDelegate, AVTObjectViewController>

@property (readonly, nonatomic) AVTAvatarStore *avatarStore;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) AVTUILogger *logger;
@property (readonly, nonatomic) AVTSimpleAvatarPicker *avatarPicker;
@property (retain, nonatomic) id<NSObject> avatarStoreChangeObserver;
@property (retain, nonatomic) NSString *presentedIdentifier;
@property (weak, nonatomic) id<AVTSimpleAvatarPickerSwiftProviderDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVTAvatarPickerDelegate> avatarPickerDelegate;
@property (readonly, nonatomic) UIView *view;
@property (weak, nonatomic) id<AVTPresenterDelegate> presenterDelegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)avatarPicker:(id)a0 didSelectAvatarRecord:(id)a1;
- (void)avatarPickerDidEndCameraSession:(id)a0;
- (void)avatarPickerWillStartCameraSession:(id)a0;
- (void)presentActionsForSelectedAvatar;
- (void)_notifyStoreChanged;
- (id)avatarPickerView;
- (void)beginObservingAvatarStoreChanges;
- (void)dismissAvatarUIControllerAnimated:(BOOL)a0;
- (void)endObservingAvatarStoreChanges;
- (id)initWithDelegate:(id)a0 allowAddItem:(BOOL)a1 allowEditing:(BOOL)a2 interItemSpacing:(double)a3;
- (void)presentAvatarUIController:(id)a0 animated:(BOOL)a1;
- (void)presentedAvatarRecord:(id)a0;
- (void)recentStickersDidChange:(id)a0;
- (void)selectAvatarRecordWithIdentifier:(id)a0 animated:(BOOL)a1;
- (void)updatePickerSelectionWithAnimation:(BOOL)a0;
- (void)updatePresentedRecordWithIdentifier:(id)a0 animated:(BOOL)a1;
- (void)updatePresentedRecordWithRecord:(id)a0 animated:(BOOL)a1;

@end
