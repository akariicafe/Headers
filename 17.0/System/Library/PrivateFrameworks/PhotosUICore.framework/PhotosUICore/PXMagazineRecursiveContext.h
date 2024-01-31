@class NSMutableArray, PXNewMagazineRectArray;

@interface PXMagazineRecursiveContext : NSObject

@property (retain, nonatomic) NSMutableArray *generatedChunks;
@property (retain, nonatomic) PXNewMagazineRectArray *outRectArray;
@property (retain, nonatomic) PXNewMagazineRectArray *fallbackRectArray;

- (void).cxx_destruct;

@end
