@class NSString, NSArray, BSActionResponse, NSObject, BSMachPortSendOnceRight;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_mach;

@interface _BSActionResponder : NSObject <BSDebugDescriptionProviding> {
    NSObject<OS_dispatch_queue> *_lock_originator_responseQueue;
    id /* block */ _lock_originator_responseHandler;
    NSObject<OS_dispatch_source> *_lock_originator_timeoutSource;
    NSObject<OS_dispatch_source> *_lock_originator_replySource;
    BSMachPortSendOnceRight *_reply;
    NSObject<OS_dispatch_mach> *_lock_nullificationMach;
    NSArray *_lock_inactivationCallStack;
    BSActionResponse *_lock_response;
    NSObject<OS_dispatch_queue> *_lock_nullificationQueue;
    id /* block */ _lock_nullificationHandler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isOriginator;
    BOOL _isOriginatorNull;
    BOOL _lock_invalidateSendsNotPossible;
    BOOL _lock_action_encoded;
    BOOL _lock_action_sent;
    BOOL _lock_action_invalidated;
    BOOL _lock_annulled;
    BOOL _lock_nullificationHandlerIsLegacy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
