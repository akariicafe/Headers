@class NSString;

@interface KMDeltaContactCollector : NSObject <CNChangeHistoryEventVisitor>

@property (retain, nonatomic) NSString *contactIdentifier;
@property (nonatomic) unsigned char deltaType;
@property (nonatomic) BOOL dropEverything;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reset;
- (void)visitUpdateContactEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void).cxx_destruct;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;

@end
