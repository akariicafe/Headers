@class NSString, NAIdentity;

@interface WKWallpaperAdjustmentTraitOffset : NSObject <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (nonatomic) struct CGPoint { double x; double y; } zoomedModeOffsetLandscape;
@property (nonatomic) struct CGPoint { double x; double y; } zoomedModeOffsetPortrait;
@property (nonatomic) struct CGPoint { double x; double y; } moreSpaceModeOffsetLandscape;
@property (nonatomic) struct CGPoint { double x; double y; } moreSpaceModeOffsetPortrait;
@property (copy, nonatomic) NSString *overrideScreenScaleMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)descriptionBuilderBlock;
- (id)wk_descriptionBuilder;
- (id)initWithAttributeDictionary:(id)a0;
- (id)propertyListRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGPoint { double x0; double x1; })offsetForCurrentScreenScaleModeWithInterfaceOrientation:(long long)a0;

@end
