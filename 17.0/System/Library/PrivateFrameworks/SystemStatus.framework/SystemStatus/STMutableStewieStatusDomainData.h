@class NSString;

@interface STMutableStewieStatusDomainData : STStewieStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (nonatomic, getter=isStewieActive) BOOL stewieActive;
@property (nonatomic, getter=isStewieConnected) BOOL stewieConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)applyDiff:(id)a0;
- (void)setStewieActive:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStewieConnected:(BOOL)a0;

@end
