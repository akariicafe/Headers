@class NSData, PLAdditionalAssetAttributes;

@interface PLSceneprint : PLManagedObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *duplicateMatchingData;
@property (retain, nonatomic) NSData *duplicateMatchingAlternateData;
@property (retain, nonatomic) PLAdditionalAssetAttributes *additionalAssetAttributes;

+ (id)entityName;
+ (id)insertInCurrentManagedObjectContext:(id)a0 withAdditionalAssetAttributes:(id)a1;

- (void)willSave;
- (void)setDuplicateMatchingData:(id)a0 duplicateMatchingAlternateData:(id)a1;

@end
