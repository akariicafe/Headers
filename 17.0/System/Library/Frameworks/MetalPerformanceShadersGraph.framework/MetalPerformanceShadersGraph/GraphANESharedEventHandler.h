@class IOSurfaceSharedEvent;
@protocol MTLSharedEvent;

@interface GraphANESharedEventHandler : NSObject {
    IOSurfaceSharedEvent *_ioSurfaceStartSharedEvent;
    id<MTLSharedEvent> _sharedEvent;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;

@end
