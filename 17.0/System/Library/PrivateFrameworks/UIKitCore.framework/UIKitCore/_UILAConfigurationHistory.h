@class NSString, NSMutableSet;

@interface _UILAConfigurationHistory : NSObject <_UILAPropertySource, NSCopying>

@property (nonatomic) BOOL hasEstablishedBaseValues;
@property (nonatomic, getter=isInLayoutArrangementUpdateSection) BOOL inLayoutArrangementUpdateSection;
@property (nonatomic) long long axis;
@property (nonatomic) BOOL layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property (readonly, nonatomic) NSMutableSet *_newlyHiddenItems;
@property (readonly, nonatomic) NSMutableSet *_newlyUnhiddenItems;
@property (readonly, nonatomic) NSMutableSet *invalidBaselineConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
