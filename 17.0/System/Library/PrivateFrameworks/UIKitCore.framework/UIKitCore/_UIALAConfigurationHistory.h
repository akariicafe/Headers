@class NSSet, NSString;

@interface _UIALAConfigurationHistory : _UILAConfigurationHistory <_UIALAPropertySource>

@property (nonatomic) BOOL hasEstablishedAlignmentValues;
@property (nonatomic, getter=isInAlignmentLayoutUpdateSection) BOOL inAlignmentLayoutUpdateSection;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) long long axis;
@property (nonatomic) BOOL layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property (readonly, nonatomic) NSSet *_newlyHiddenItems;
@property (readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property (readonly, nonatomic) NSSet *invalidBaselineConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
