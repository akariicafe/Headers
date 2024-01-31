@class IRServiceMO, NSDate;

@interface IRStatisticsMO : NSManagedObject

@property (nonatomic) long long numberOfContextChanges;
@property (nonatomic) long long numberOfMiLoPredictions;
@property (nonatomic) long long numberOfMiLoPredictionsInUpdatesMode;
@property (nonatomic) long long lastMiLoLSLItems;
@property (nonatomic) long long lastMiLoQualityReasonBitmap;
@property (nonatomic) long long lastMiLoQuality;
@property (nonatomic) long long lastMiLoModels;
@property (nonatomic) long long timeInUpdatesModeInSeconds;
@property (nonatomic) long long numberOfPickerChoiceEvents;
@property (nonatomic) long long numberOfCorrectPickerChoiceEvents;
@property (retain, nonatomic) NSDate *lastClearDate;
@property (retain, nonatomic) IRServiceMO *service;

+ (id)fetchRequest;
+ (void)setPropertiesOfStatisticsMO:(id)a0 withStatisticsDO:(id)a1;

- (id)convert;

@end
