@interface WiFiP2PXPCExportedObjectProxy : NSObject {
    Class _exportedObjectClass;
}

@property (weak, nonatomic) id exportedObject;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
