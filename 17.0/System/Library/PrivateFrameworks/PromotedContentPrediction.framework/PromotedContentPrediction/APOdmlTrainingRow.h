@class NSDictionary, NSString;

@interface APOdmlTrainingRow : NSObject

@property (readonly, nonatomic) NSDictionary *features;
@property (retain, nonatomic) NSString *rowID;

- (id)initWithFeatures:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidFeature:(id)a0 featureName:(id)a1 min:(id)a2 max:(id)a3 sentinelValues:(id)a4;
- (BOOL)isValidRow:(id)a0;
- (void)reportError:(long long)a0 name:(id)a1 value:(id)a2;

@end
