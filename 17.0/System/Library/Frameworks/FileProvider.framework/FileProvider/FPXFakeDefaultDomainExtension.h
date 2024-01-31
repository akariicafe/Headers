@class NSFileProviderDomain, NSString;

@interface FPXFakeDefaultDomainExtension : NSObject <NSFileProviderReplicatedExtension>

@property (retain, nonatomic) NSFileProviderDomain *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDomain:(id)a0;
- (id)fetchContentsForItemWithIdentifier:(id)a0 version:(id)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (id)itemForIdentifier:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (id)deleteItemWithIdentifier:(id)a0 baseVersion:(id)a1 options:(unsigned long long)a2 request:(id)a3 completionHandler:(id /* block */)a4;
- (void)invalidate;
- (id)modifyItem:(id)a0 baseVersion:(id)a1 changedFields:(unsigned long long)a2 contents:(id)a3 options:(unsigned long long)a4 request:(id)a5 completionHandler:(id /* block */)a6;
- (void).cxx_destruct;
- (id)createItemBasedOnTemplate:(id)a0 fields:(unsigned long long)a1 contents:(id)a2 options:(unsigned long long)a3 request:(id)a4 completionHandler:(id /* block */)a5;
- (id)enumeratorForContainerItemIdentifier:(id)a0 request:(id)a1 error:(id *)a2;

@end
