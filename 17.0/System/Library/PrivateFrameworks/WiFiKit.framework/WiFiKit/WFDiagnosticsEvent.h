@class NSString, NSDictionary;

@interface WFDiagnosticsEvent : NSObject <WFUIEvent>

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *eventDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_testTypeToString:(long long)a0;
- (id)initWithDiagnosticsEventType:(long long)a0 didPassTest:(BOOL)a1 failedTests:(id)a2;

@end
