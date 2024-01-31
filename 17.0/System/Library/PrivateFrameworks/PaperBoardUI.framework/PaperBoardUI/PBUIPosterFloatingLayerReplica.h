@class NSString;

@interface PBUIPosterFloatingLayerReplica : PBUIPortalReplicaView <PBUIFloatingLayerObserver>

@property (nonatomic, getter=isFloatingLayerStandin) BOOL floatingLayerStandin;
@property (readonly, nonatomic) BOOL isFloatingLayerObserver;
@property (readonly, nonatomic) long long effectiveStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
