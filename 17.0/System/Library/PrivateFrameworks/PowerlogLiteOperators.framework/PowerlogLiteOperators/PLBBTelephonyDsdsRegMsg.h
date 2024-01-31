@class NSString;

@interface PLBBTelephonyDsdsRegMsg : NSObject

@property int dataIndicator;
@property int dataAttached;
@property int dataActive;
@property (retain) NSString *operatorName;
@property int isHome;
@property (retain) NSString *status;
@property int serviceOpt;

- (id)init;
- (void).cxx_destruct;

@end
