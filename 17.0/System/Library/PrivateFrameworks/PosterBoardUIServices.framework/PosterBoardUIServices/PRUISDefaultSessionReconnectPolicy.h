@class NSString, NSDate;

@interface PRUISDefaultSessionReconnectPolicy : NSObject <PRUISSessionReconnectPolicy> {
    NSDate *_lastDisconnect;
    double _intervalMovingAverage;
    double _alpha;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
