@class WBSWebExtensionData;

@interface WBSSavePermissionsToStorageInformation : NSObject

@property (readonly, nonatomic) WBSWebExtensionData *webExtension;
@property (readonly, nonatomic) BOOL permissionsWereUpdatedDueToAnExternalChange;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithWebExtension:(id)a0 permissionsWereUpdatedDueToAnExternalChange:(BOOL)a1;

@end
