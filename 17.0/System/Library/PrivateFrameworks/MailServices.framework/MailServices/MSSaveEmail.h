@interface MSSaveEmail : MSMailDefaultService

+ (void)placeholderAttachmentForFileName:(id)a0 fileSize:(long long)a1 mimeType:(id)a2 contentID:(id)a3 completionBlock:(id /* block */)a4;
+ (void)securityScopeForPlaceholderURL:(id)a0 completionBlock:(id /* block */)a1;
+ (void)deletePlaceholderAttachmentForURL:(id)a0 completionBlock:(id /* block */)a1;
+ (void)saveMessageData:(id)a0 forAccountWithID:(id)a1 autosaveIdentifier:(id)a2 completionBlock:(id /* block */)a3;
+ (void)saveEmail:(id)a0 completionBlock:(id /* block */)a1;

- (void)_saveEmail:(id)a0 completionBlock:(id /* block */)a1;
- (void)_saveMessageData:(id)a0 forAccountWithID:(id)a1 autosaveIdentifier:(id)a2 completionBlock:(id /* block */)a3;
- (void)_simulateServicesMethod:(id)a0 arguments:(id)a1 callback:(id /* block */)a2;

@end
