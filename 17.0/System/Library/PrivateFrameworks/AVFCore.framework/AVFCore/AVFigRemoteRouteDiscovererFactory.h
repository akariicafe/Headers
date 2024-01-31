@class NSString;

@interface AVFigRemoteRouteDiscovererFactory : NSObject <AVFigRouteDiscovererFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct OpaqueFigRouteDiscoverer { } *)createRouteDiscovererWithAllocator:(struct __CFAllocator { } *)a0 options:(struct __CFDictionary { } *)a1;

@end
