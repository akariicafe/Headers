@class NSArray, NSString;

@interface PXSmartAlbumLensModelCondition : PXSmartAlbumEXIFCondition {
    NSArray *_lensModels;
}

@property (readonly, nonatomic) NSArray *lensModels;
@property (retain, nonatomic) NSString *lensModel;

+ (id)defaultSingleQueryForEditingContext:(id)a0;

- (void).cxx_destruct;

@end
