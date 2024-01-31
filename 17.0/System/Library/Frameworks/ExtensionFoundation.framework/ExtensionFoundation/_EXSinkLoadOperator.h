@class NSXPCListenerEndpoint;

@interface _EXSinkLoadOperator : _EXLoadOperator <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSXPCListenerEndpoint *endpoint;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)loadItemForTypeIdentifier:(id)a0 completionHandler:(id /* block */)a1 expectedValueClass:(Class)a2 options:(id)a3;
- (void)loadPreviewImageWithCompletionHandler:(id /* block */)a0 expectedValueClass:(Class)a1 options:(id)a2;

@end
