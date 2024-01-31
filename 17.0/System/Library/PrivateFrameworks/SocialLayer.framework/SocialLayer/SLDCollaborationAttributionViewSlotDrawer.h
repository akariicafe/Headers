@class NSString;

@interface SLDCollaborationAttributionViewSlotDrawer : NSObject <UISSlotDrawer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resolvedStyleForStyle:(id)a0 tag:(id)a1;

- (id)drawingWithStyle:(id)a0 tag:(id)a1 forRemote:(BOOL)a2;
- (struct CGImage { } *)imageWithStyle:(id)a0 tag:(id)a1 forRemote:(BOOL)a2;
- (unsigned long long)authenticationMessageContextForStyle:(id)a0 tag:(id)a1;
- (unsigned long long)hitTestInformationMaskForStyle:(id)a0 tag:(id)a1;
- (id)resolvedStyleForStyle:(id)a0 tag:(id)a1;

@end
