@class NSString, NSDictionary;

@interface SBSystemActionSuppressionStatus : NSObject <BSDescriptionStreamable> {
    long long _state;
    NSDictionary *_metrics;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
