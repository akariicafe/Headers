@class NSObject;
@protocol OS_nw_activity;

@interface COMeshRequest : COMeshCommand

@property (retain, nonatomic) NSObject<OS_nw_activity> *activity;

+ (id)acceptableResponses;

- (void).cxx_destruct;
- (double)responseTimeout;

@end
