@class NSString, UITraitCollection;

@interface CKMessageEntrySolidBlurBackgroundView : UIVisualEffectView <CKMessageEntryBackgroundViewProtocol>

@property (retain, nonatomic) NSString *backdropGroupName;
@property (retain, nonatomic) UITraitCollection *entryViewTraitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long style;

- (void)_updateBackgroundView;
- (id)init;
- (void).cxx_destruct;
- (id)inputAccessoryViewBackdropColor;
- (id)inputAccessoryViewBackdropEffects;

@end
