@class NSArray, NSString;
@protocol STStatusDomainData, STStatusDomainServerHandle;

@interface STStatusDomain : NSObject <STStatusDomainClientHandle> {
    BOOL _invalidated;
    id /* block */ _dataChangedBlock;
    id /* block */ _dataChangedWithContextBlock;
}

@property (class, readonly, nonatomic) unsigned long long statusDomainName;

@property (readonly, nonatomic) id<STStatusDomainServerHandle> serverHandle;
@property (readonly, copy, nonatomic) id<STStatusDomainData> data;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) NSArray *preferredLocalizations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithServerHandle:(id)a0;
- (void).cxx_destruct;
- (void)observeData:(id /* block */)a0;
- (void)observeDataWithBlock:(id /* block */)a0;
- (void)observeData:(id)a0 forDomain:(unsigned long long)a1 withChangeContext:(id)a2;

@end
