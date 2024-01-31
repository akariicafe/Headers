@class TDMultisizeImageSetRenditionSpec, TDMultisizeImageSetSizeIndex;

@interface TDMultisizeImageRenditionSpec : TDSimpleArtworkRenditionSpec

@property (retain, nonatomic) TDMultisizeImageSetSizeIndex *sizeIndex;
@property (retain, nonatomic) TDMultisizeImageSetRenditionSpec *multisizeImageSetRendition;

@end
