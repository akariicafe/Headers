@class ISResourceProvider;

@interface ISGenericApplicationIcon : ISTypeIcon

@property (readonly) ISResourceProvider *resourceProvider;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)makeResourceProvider;

@end
