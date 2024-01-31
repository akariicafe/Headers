@class NSUUID, NSDate;

@interface ABTachogramClassification : NSObject

@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) BOOL aFibDetected;

- (void).cxx_destruct;

@end
