@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSADPPreventStandbyAssertion : NSObject

@property (nonatomic) struct ADPAssertion { } *adpAssertion;
@property (retain, nonatomic) NSString *name;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_setupADPAssertion:(id)a0;
- (id)initWithName:(id)a0 clientQueue:(id)a1;

@end
