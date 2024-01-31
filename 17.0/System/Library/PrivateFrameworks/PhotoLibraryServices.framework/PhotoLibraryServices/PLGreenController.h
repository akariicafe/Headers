@class NSDictionary;

@interface PLGreenController : NSObject

@property (readonly, nonatomic) NSDictionary *currentGreenValues;

- (id)init;
- (void).cxx_destruct;
- (BOOL)greenValuesSimilarToGreenValues:(id)a0;
- (BOOL)isGreenStateValid;
- (void)readValuesFromDisk;

@end
