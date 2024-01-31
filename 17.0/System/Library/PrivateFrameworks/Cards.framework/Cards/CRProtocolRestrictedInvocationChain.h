@class NSString, Protocol;
@protocol CRInvocationChainDelegate;

@interface CRProtocolRestrictedInvocationChain : CRInvocationChain <CRInvocationChainDelegate>

@property (weak, nonatomic) id<CRInvocationChainDelegate> delegate;
@property (retain, nonatomic) Protocol *restrictingProtocol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)conformsToProtocol:(id)a0;
- (void).cxx_destruct;
- (BOOL)_selector:(SEL)a0 isPartOfProtocol:(id)a1;
- (BOOL)_selectorIsPartOfRestrictingProtocol:(SEL)a0;
- (BOOL)invocationChain:(id)a0 shouldForwardInvocation:(id)a1 toTarget:(id)a2;
- (BOOL)isEligibleForSelector:(SEL)a0;

@end
