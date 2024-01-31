@class NSString;

@interface VIAEntryPointEvent : NSObject <VIAEvent>

@property (readonly, nonatomic) unsigned long long queryID;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long viewAppearEvent;
@property (readonly, copy, nonatomic) NSString *originatingApplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)endEventWithOriginatingApplication:(id)a0;
+ (id)startEventWithQueryID:(unsigned long long)a0 viewAppearEvent:(unsigned long long)a1 originatingApplication:(id)a2;

- (id)feedback;
- (void).cxx_destruct;
- (id)initWithQueryID:(unsigned long long)a0 type:(long long)a1 viewAppearEvent:(unsigned long long)a2 originatingApplication:(id)a3;

@end
