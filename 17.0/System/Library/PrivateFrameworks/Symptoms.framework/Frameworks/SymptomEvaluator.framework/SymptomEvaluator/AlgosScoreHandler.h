@class NSString, NSNotificationCenter;

@interface AlgosScoreHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {
    BOOL active;
    NSNotificationCenter *notificationCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (id)init;
- (BOOL)noteSymptom:(id)a0;
- (int)configureInstance:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (void).cxx_destruct;
- (void)processEventFor:(id)a0 withScore:(double)a1;

@end
