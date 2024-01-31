@class PHFace, PHAsset, PHPerson;

@interface PXPeopleFaceTile : NSObject

@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) PHFace *face;
@property (readonly, nonatomic) PHAsset *asset;
@property (readonly) BOOL isUserDefined;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithFace:(id)a0 asset:(id)a1 person:(id)a2;

@end
