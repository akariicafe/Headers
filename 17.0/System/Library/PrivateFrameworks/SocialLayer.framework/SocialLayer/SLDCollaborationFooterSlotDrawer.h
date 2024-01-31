@class NSString;

@interface SLDCollaborationFooterSlotDrawer : NSObject <UISSlotDrawer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)drawingWithStyle:(id)a0 tag:(id)a1 forRemote:(BOOL)a2;
- (struct CGImage { } *)imageWithStyle:(id)a0 tag:(id)a1 forRemote:(BOOL)a2;

@end
