@class NSString, PRSPosterSnapshot, FBSDisplayIdentity;

@interface PRSPosterSnapshotCollection : NSObject <BSXPCSecureCoding>

@property (readonly, nonatomic) PRSPosterSnapshot *primaryLayersSnapshot;
@property (readonly, nonatomic) PRSPosterSnapshot *floatingLayerSnapshot;
@property (readonly, nonatomic) FBSDisplayIdentity *snapshotDisplayIdentity;
@property (readonly, nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) double snapshotScale;
@property (readonly, nonatomic) long long interfaceStyle;
@property (readonly, nonatomic) long long accessibilityContrast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)_populateInterfaceOrientationFromSurfacesIfPossible;
- (id)initWithPrimaryLayersSnapshot:(id)a0 floatingLayerSnapshot:(id)a1 snapshotScale:(double)a2 interfaceStyle:(long long)a3 accessibilityContrast:(long long)a4;
- (id)initWithPrimaryLayersSnapshot:(id)a0 floatingLayerSnapshot:(id)a1 snapshotScale:(double)a2 interfaceStyle:(long long)a3 accessibilityContrast:(long long)a4 interfaceOrientation:(long long)a5 displayIdentity:(id)a6;

@end
