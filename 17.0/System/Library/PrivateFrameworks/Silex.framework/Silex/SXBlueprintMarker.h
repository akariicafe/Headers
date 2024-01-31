@class NSArray, NSString;
@protocol SXComponentAnchor, SXComponent;

@interface SXBlueprintMarker : NSObject <SXBlueprintMarker>

@property (readonly, nonatomic) id<SXComponent> leadingComponent;
@property (readonly, nonatomic) id<SXComponent> trailingComponent;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } approximateLocation;
@property (readonly, nonatomic) NSArray *path;
@property (retain, nonatomic) id<SXComponentAnchor> componentAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
