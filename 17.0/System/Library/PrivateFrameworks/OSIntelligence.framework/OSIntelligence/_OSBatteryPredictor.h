@class NSXPCConnection, NSObject;
@protocol OS_os_log;

@interface _OSBatteryPredictor : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)predictor;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)lowSOCPredicted;
- (id)lowSOCPredictionOutput;
- (id)lowSOCPredictionWithError:(id *)a0;

@end
