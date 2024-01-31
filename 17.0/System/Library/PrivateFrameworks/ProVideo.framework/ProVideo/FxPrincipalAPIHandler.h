@class NSString, NSObject;
@protocol FxPlugPrincipalDelegate;

@interface FxPrincipalAPIHandler : NSObject <PROAPIObject> {
    NSObject<FxPlugPrincipalDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)a0;
- (void)setDelegate:(id)a0;
- (BOOL)conformsToProtocol:(id)a0 version:(unsigned int)a1;
- (id)servicePrincipal;

@end
