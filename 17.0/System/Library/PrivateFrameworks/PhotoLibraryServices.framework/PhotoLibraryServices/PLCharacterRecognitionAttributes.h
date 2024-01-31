@class NSData, PLMediaAnalysisAssetAttributes, NSDate;

@interface PLCharacterRecognitionAttributes : PLManagedObject

@property (retain, nonatomic) NSData *characterRecognitionData;
@property (retain, nonatomic) NSData *machineReadableCodeData;
@property (nonatomic) short algorithmVersion;
@property (retain, nonatomic) NSDate *adjustmentVersion;
@property (retain, nonatomic) PLMediaAnalysisAssetAttributes *mediaAnalysisAssetAttributes;

+ (id)entityName;

@end
