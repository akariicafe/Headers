@class CADisplayLink;

@interface WebDisplayLinkHandler : NSObject {
    void *m_monitor;
    CADisplayLink *m_displayLink;
}

- (void)setPaused:(BOOL)a0;
- (void)handleDisplayLink:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (id)initWithMonitor:(void *)a0;

@end
