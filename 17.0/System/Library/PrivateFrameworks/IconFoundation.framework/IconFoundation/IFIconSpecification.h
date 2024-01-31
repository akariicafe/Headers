@class NSArray, NSString;

@interface IFIconSpecification : NSObject

@property (readonly) NSArray *imageSpecifications;
@property (readonly) NSString *name;
@property (readonly) struct CGSize { double width; double height; } maxSize;
@property (readonly) struct CGSize { double width; double height; } minSize;
@property (readonly) double maxScale;
@property (readonly) double minScale;
@property (readonly) NSArray *allImageSpecifications;
@property (readonly) NSArray *variants;
@property (readonly) NSArray *allVariants;

+ (id)macosTemplateIconSpecification;
+ (id)watchAppIconSpecification;
+ (id)tvAppIconSpecification;
+ (id)macosIconSpecification;
+ (id)macosDocumentIconSpecification;
+ (id)rOSAppIconSpecification;
+ (id)iosAppIconSpecification;
+ (id)iosDocumentIconSpecification;
+ (id)iosDocumentGlyphSpecification;
+ (id)defaultIconSpecification;
+ (id)iosMessagesAppIconSpecification;

- (id)init;
- (id)imageSpecificationsMatchingPredicate:(id)a0;
- (id)description;
- (id)imageSpecificationsWithTags:(id)a0 withoutTags:(id)a1;
- (id)_initWithName:(id)a0 imageSpecifiactions:(id)a1 variants:(id)a2;
- (void).cxx_destruct;
- (id)imageSpecificationForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
