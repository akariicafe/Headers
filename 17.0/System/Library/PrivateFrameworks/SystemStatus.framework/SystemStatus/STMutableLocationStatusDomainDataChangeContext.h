@class NSString;

@interface STMutableLocationStatusDomainDataChangeContext : STLocationStatusDomainDataChangeContext <STMutableStatusDomainDataChangeContext>

@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;
@property (nonatomic) BOOL wantsProminentIndication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUserInitiated:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setWantsProminentIndication:(BOOL)a0;

@end
