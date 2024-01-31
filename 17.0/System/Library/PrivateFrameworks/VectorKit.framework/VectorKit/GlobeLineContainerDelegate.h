@class NSString;

@interface GlobeLineContainerDelegate : NSObject <VKGlobeLineContainerDelegate> {
    void *_renderer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRenderer:(void *)a0;
- (void)lineContainerNeedsDisplay:(id)a0;

@end
