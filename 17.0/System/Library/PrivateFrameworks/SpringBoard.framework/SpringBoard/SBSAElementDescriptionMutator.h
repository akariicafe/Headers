@class NSUUID, NSString, SBSAElementDescription;
@protocol SAElementIdentifying;

@interface SBSAElementDescriptionMutator : NSObject <SAUIElementViewPreferencesAccepting, SAUIElementSubcomponentPreferencesAccepting> {
    SBSAElementDescription *_elementDescription;
}

@property (copy, nonatomic) NSUUID *interfaceElementIdentifier;
@property (copy, nonatomic) id<SAElementIdentifying> associatedSystemApertureElementIdentity;
@property (nonatomic) int appearState;
@property (copy, nonatomic) NSString *snapshotReason;
@property (nonatomic) double sensorObscuringShadowProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double leadingViewBlurProgress;
@property (nonatomic) double leadingViewAlpha;
@property (nonatomic) double leadingViewSquishProgress;
@property (nonatomic) struct CGSize { double x0; double x1; } leadingViewScale;
@property (nonatomic) double trailingViewBlurProgress;
@property (nonatomic) double trailingViewAlpha;
@property (nonatomic) double trailingViewSquishProgress;
@property (nonatomic) struct CGSize { double x0; double x1; } trailingViewScale;
@property (nonatomic) double minimalViewBlurProgress;
@property (nonatomic) double minimalViewAlpha;
@property (nonatomic) double minimalViewSquishProgress;
@property (nonatomic) struct CGSize { double x0; double x1; } minimalViewScale;
@property (nonatomic) double customContentBlurProgress;
@property (nonatomic) double customContentAlpha;
@property (nonatomic) double snapshotViewBlurProgress;
@property (nonatomic) double snapshotViewAlpha;

- (void).cxx_destruct;
- (id)initWithElementDescription:(id)a0;

@end
