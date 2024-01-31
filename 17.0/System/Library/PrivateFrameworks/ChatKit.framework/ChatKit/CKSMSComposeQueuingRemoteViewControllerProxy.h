@class NSMutableArray;
@protocol CKSMSCompose;

@interface CKSMSComposeQueuingRemoteViewControllerProxy : NSObject

@property (retain, nonatomic) NSMutableArray *queuedInvocations;
@property (retain, nonatomic) id<CKSMSCompose> serviceViewControllerProxy;

- (void)forwardInvocation:(id)a0;
- (id)init;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
