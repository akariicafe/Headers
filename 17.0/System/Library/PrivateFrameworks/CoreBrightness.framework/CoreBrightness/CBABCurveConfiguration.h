@class NSString, NSNumber;

@interface CBABCurveConfiguration : NSObject

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSNumber *vendorID;
@property (retain, nonatomic) NSNumber *productID;
@property (retain, nonatomic) NSNumber *maxBrightness;
@property (nonatomic) BOOL isBuiltin;
@property (nonatomic) BOOL isEnergySaving;

- (void)dealloc;
- (id)description;

@end
