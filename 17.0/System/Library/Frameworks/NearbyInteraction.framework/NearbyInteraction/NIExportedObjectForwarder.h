@interface NIExportedObjectForwarder : NSObject

@property (weak) id exportedObject;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithExportedObject:(id)a0;
- (void).cxx_destruct;

@end
