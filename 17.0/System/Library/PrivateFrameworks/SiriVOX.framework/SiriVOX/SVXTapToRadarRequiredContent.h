@class NSString, NSUUID, NSNumber;

@interface SVXTapToRadarRequiredContent : NSObject

@property (retain, nonatomic) NSString *error;
@property (retain, nonatomic) NSUUID *requestID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *radarDescription;
@property (retain, nonatomic) NSString *componentName;
@property (retain, nonatomic) NSString *componentVersion;
@property (retain, nonatomic) NSNumber *componentID;
@property (retain, nonatomic) NSString *displayReason;

- (void).cxx_destruct;

@end
