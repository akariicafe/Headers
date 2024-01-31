@interface _TPSXPCExportedObjectProxy : NSObject

@property (weak, nonatomic) id weakExportedObject;
@property (retain, nonatomic) Class weakExportedObjectClass;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
