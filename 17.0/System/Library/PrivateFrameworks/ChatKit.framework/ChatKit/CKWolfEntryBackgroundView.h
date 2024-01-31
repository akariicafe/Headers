@class NSString, UITraitCollection, UIView;

@interface CKWolfEntryBackgroundView : UIView <CKMessageEntryBackgroundViewProtocol>

@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) NSString *backdropGroupName;
@property (retain, nonatomic) UITraitCollection *entryViewTraitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long style;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)inputAccessoryViewBackdropColor;
- (id)inputAccessoryViewBackdropEffects;

@end
