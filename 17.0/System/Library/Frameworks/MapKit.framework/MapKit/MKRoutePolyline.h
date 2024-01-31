@class NSString;

@interface MKRoutePolyline : MKPolyline <MKDirectionsResponsePolyline>

@property (nonatomic, getter=_requiresModernMap, setter=_setRequiresModernMap:) BOOL requiresModernMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_stepWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
