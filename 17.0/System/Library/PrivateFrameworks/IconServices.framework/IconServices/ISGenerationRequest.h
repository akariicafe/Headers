@class ISImageDescriptor, ISConcreteIcon, NSUUID;

@interface ISGenerationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) ISConcreteIcon *icon;
@property (retain) ISImageDescriptor *imageDescriptor;
@property (retain) NSUUID *lsDatabaseUUID;
@property unsigned long long lsDatabaseSequenceNumber;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)iconSpecificationFromRecipe:(id)a0;
- (id)generateImageReturningRecordIdentifiers:(id *)a0;
- (id)recipeFromResourceProvider:(id)a0 descriptor:(id)a1;
- (id)_decorationRecipeKeyFromTypeIdentifier:(id)a0 position:(long long)a1;
- (void).cxx_destruct;
- (id)generateImage;
- (id)initWithCoder:(id)a0;

@end
