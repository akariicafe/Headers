@interface SBPIPEdgeResizeAnchorPointSettings : PTSettings

@property (nonatomic) unsigned long long anchorPointType;
@property (nonatomic) double dockUpperLeftResizeTopEdgeAnchorPointX;
@property (nonatomic) double dockUpperLeftResizeTopEdgeAnchorPointY;
@property (nonatomic) double dockUpperLeftResizeBottomEdgeAnchorPointX;
@property (nonatomic) double dockUpperLeftResizeBottomEdgeAnchorPointY;
@property (nonatomic) double dockUpperLeftResizeLeftEdgeAnchorPointX;
@property (nonatomic) double dockUpperLeftResizeLeftEdgeAnchorPointY;
@property (nonatomic) double dockUpperLeftResizeRightEdgeAnchorPointX;
@property (nonatomic) double dockUpperLeftResizeRightEdgeAnchorPointY;
@property (nonatomic) double dockLowerLeftResizeTopEdgeAnchorPointX;
@property (nonatomic) double dockLowerLeftResizeTopEdgeAnchorPointY;
@property (nonatomic) double dockLowerLeftResizeBottomEdgeAnchorPointX;
@property (nonatomic) double dockLowerLeftResizeBottomEdgeAnchorPointY;
@property (nonatomic) double dockLowerLeftResizeLeftEdgeAnchorPointX;
@property (nonatomic) double dockLowerLeftResizeLeftEdgeAnchorPointY;
@property (nonatomic) double dockLowerLeftResizeRightEdgeAnchorPointX;
@property (nonatomic) double dockLowerLeftResizeRightEdgeAnchorPointY;
@property (nonatomic) double dockUpperRightResizeTopEdgeAnchorPointX;
@property (nonatomic) double dockUpperRightResizeTopEdgeAnchorPointY;
@property (nonatomic) double dockUpperRightResizeBottomEdgeAnchorPointX;
@property (nonatomic) double dockUpperRightResizeBottomEdgeAnchorPointY;
@property (nonatomic) double dockUpperRightResizeLeftEdgeAnchorPointX;
@property (nonatomic) double dockUpperRightResizeLeftEdgeAnchorPointY;
@property (nonatomic) double dockUpperRightResizeRightEdgeAnchorPointX;
@property (nonatomic) double dockUpperRightResizeRightEdgeAnchorPointY;
@property (nonatomic) double dockLowerRightResizeTopEdgeAnchorPointX;
@property (nonatomic) double dockLowerRightResizeTopEdgeAnchorPointY;
@property (nonatomic) double dockLowerRightResizeBottomEdgeAnchorPointX;
@property (nonatomic) double dockLowerRightResizeBottomEdgeAnchorPointY;
@property (nonatomic) double dockLowerRightResizeLeftEdgeAnchorPointX;
@property (nonatomic) double dockLowerRightResizeLeftEdgeAnchorPointY;
@property (nonatomic) double dockLowerRightResizeRightEdgeAnchorPointX;
@property (nonatomic) double dockLowerRightResizeRightEdgeAnchorPointY;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void)_setAnchorPointForType:(unsigned long long)a0;

@end
