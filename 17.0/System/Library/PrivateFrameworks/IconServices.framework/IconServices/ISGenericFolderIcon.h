@class ISResourceProvider;

@interface ISGenericFolderIcon : ISTypeIcon

@property (readonly) ISResourceProvider *resourceProvider;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)makeResourceProvider;

@end
