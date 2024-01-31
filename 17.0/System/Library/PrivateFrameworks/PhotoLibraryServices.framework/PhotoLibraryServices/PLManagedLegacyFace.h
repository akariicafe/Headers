@class NSValue, NSString, PLManagedAsset;

@interface PLManagedLegacyFace : PLManagedObject

@property (retain, nonatomic) NSValue *relativeRectValue;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } relativeRect;
@property (nonatomic) short identifier;
@property (retain, nonatomic) NSString *albumUUID;

+ (id)entityName;

- (void)delete;

@end
