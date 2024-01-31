@interface SBWebApplication : SBApplication

+ (id)_webAppIdentifierFromWebClipIdentifier:(id)a0;
+ (id)_webClipIdentifierFromWebAppIdentifier:(id)a0;

- (BOOL)supportsMultitaskingShelf;
- (id)iconIdentifier;
- (BOOL)isWebApplication;

@end
