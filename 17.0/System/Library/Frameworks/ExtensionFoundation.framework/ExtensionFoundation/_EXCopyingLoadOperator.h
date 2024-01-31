@class NSDictionary, NSString, NSItemProvider;

@interface _EXCopyingLoadOperator : _EXLoadOperator <_EXItemProviderLoading>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) NSItemProvider *itemProvider;
@property (retain, nonatomic) NSDictionary *items;
@property (nonatomic) struct { unsigned int val[8]; } destinationProcessAuditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)loadItemForTypeIdentifier:(id)a0 completionHandler:(id /* block */)a1 expectedValueClass:(Class)a2 options:(id)a3;
- (void)loadPreviewImageWithCompletionHandler:(id /* block */)a0 expectedValueClass:(Class)a1 options:(id)a2;
- (id)_sandboxedResourceForItemIfNeeded:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 error:(id *)a2;
- (id)initWithItemProvider:(id)a0 destinationProcessAuditToken:(struct { unsigned int x0[8]; })a1;

@end
