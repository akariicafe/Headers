@class NSString, NSFileProviderDomain, NSHashTable;
@protocol _SWFileProviderCollaborationProviding;

@interface _SWBaseCollaborationSource : NSObject <NSFileProviderServiceSource, NSXPCListenerDelegate, NSFileProviderServiceSource_Private> {
    NSHashTable *_listeners;
}

@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSFileProviderDomain *domain;
@property (readonly, nonatomic) id<_SWFileProviderCollaborationProviding> extension;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *requiredEntitlement;

- (id)interface;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)initWithItemIdentifier:(id)a0 domain:(id)a1 extension:(id)a2;
- (id)makeListenerEndpointAndReturnError:(id *)a0;

@end
