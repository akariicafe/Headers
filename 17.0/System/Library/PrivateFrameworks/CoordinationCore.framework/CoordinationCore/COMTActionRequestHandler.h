@class NSString, NSSet, NSObject;
@protocol OS_dispatch_queue, COMTActionRequestHandlerDelegate;

@interface COMTActionRequestHandler : NSObject

@property (readonly, nonatomic) NSString *targetType;
@property (readonly, nonatomic) NSSet *actions;
@property (readonly, copy, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, weak, nonatomic) id<COMTActionRequestHandlerDelegate> delegate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(id)a0 actions:(id)a1 delegate:(id)a2 dispatchQueue:(id)a3;

@end
