@class NSNumber, NSString, ATXFaceGalleryItem;

@interface PBFGalleryOptions : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *modeSemanticTypeToCreate;
@property (copy, nonatomic) NSString *modeSymbolImageName;
@property (retain, nonatomic) ATXFaceGalleryItem *suggestedGalleryItem;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
