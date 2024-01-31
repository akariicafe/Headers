@class NSManagedObjectModel, NSString, NSCloudKitMirroringDelegateOptions;

@interface PFCloudKitModelValidator : NSObject {
    NSManagedObjectModel *_model;
    NSString *_configurationName;
    BOOL _skipValueTransformerValidation;
    BOOL _validateLegacyMetadataAttributes;
    NSCloudKitMirroringDelegateOptions *_options;
    BOOL _supportsMergeableTransformable;
}

- (void)dealloc;
- (id)initWithManagedObjectModel:(id)a0 configuration:(id)a1 mirroringDelegateOptions:(id)a2;

@end
