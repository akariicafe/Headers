@class NSUUID, NSString;
@protocol SAElementIdentifying;

@interface SBSAElementDescription : NSObject <SBSAInterfaceElementIdentifying, SAUIElementViewPreferencesProviding, SAUISnapshotReasonProviding, SAUIElementSubcomponentPreferencesProviding, NSCopying, SBSABlockMutating>

@property (class, readonly, nonatomic) Class mutatorClass;

@property (copy, nonatomic, setter=_setInterfaceElementIdentifier:) NSUUID *interfaceElementIdentifier;
@property (copy, nonatomic, setter=_setAssociatedSystemApertureElementIdentity:) id<SAElementIdentifying> associatedSystemApertureElementIdentity;
@property (nonatomic, setter=_setAppearState:) int appearState;
@property (nonatomic, setter=_setSensorObscuringShadowProgress:) double sensorObscuringShadowProgress;
@property (nonatomic, setter=_setLeadingViewBlurProgress:) double leadingViewBlurProgress;
@property (nonatomic, setter=_setLeadingViewAlpha:) double leadingViewAlpha;
@property (nonatomic, setter=_setLeadingViewSquishProgress:) double leadingViewSquishProgress;
@property (nonatomic, setter=_setLeadingViewScale:) struct CGSize { double width; double height; } leadingViewScale;
@property (nonatomic, setter=_setTrailingViewBlurProgress:) double trailingViewBlurProgress;
@property (nonatomic, setter=_setTrailingViewAlpha:) double trailingViewAlpha;
@property (nonatomic, setter=_setTrailingViewSquishProgress:) double trailingViewSquishProgress;
@property (nonatomic, setter=_setTrailingViewScale:) struct CGSize { double width; double height; } trailingViewScale;
@property (nonatomic, setter=_setMinimalViewBlurProgress:) double minimalViewBlurProgress;
@property (nonatomic, setter=_setMinimalViewAlpha:) double minimalViewAlpha;
@property (nonatomic, setter=_setMinimalViewSquishProgress:) double minimalViewSquishProgress;
@property (nonatomic, setter=_setMinimalViewScale:) struct CGSize { double width; double height; } minimalViewScale;
@property (nonatomic, setter=_setCustomContentBlurProgress:) double customContentBlurProgress;
@property (nonatomic, setter=_setCustomContentAlpha:) double customContentAlpha;
@property (nonatomic, setter=_setSnapshotViewBlurProgress:) double snapshotViewBlurProgress;
@property (nonatomic, setter=_setSnapshotViewAlpha:) double snapshotViewAlpha;
@property (copy, nonatomic, setter=_setSnapshotReason:) NSString *snapshotReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithBlock:(id /* block */)a0;

- (id)copyWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
