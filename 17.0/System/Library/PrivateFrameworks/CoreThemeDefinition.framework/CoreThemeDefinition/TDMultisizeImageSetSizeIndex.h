@class NSSet, TDMultisizeImageSetProduction;

@interface TDMultisizeImageSetSizeIndex : NSManagedObject

@property (nonatomic) int height;
@property (nonatomic) int width;
@property (nonatomic) short index;
@property (retain, nonatomic) NSSet *imageRenditions;
@property (retain, nonatomic) TDMultisizeImageSetProduction *multisizeImageSetProduction;
@property (retain, nonatomic) NSSet *multisizeImageSetRenditions;

@end
