@class SFApp, NSDate;

@interface SFAppExperience : NSManagedObject

@property (copy, nonatomic) NSDate *firstTimeStamp;
@property (copy, nonatomic) NSDate *timeStamp;
@property (nonatomic) double algosScore;
@property (nonatomic) int algosSamples;
@property (retain, nonatomic) SFApp *hasApp;

+ (id)entityName;
+ (id)fetchRequest;

@end
