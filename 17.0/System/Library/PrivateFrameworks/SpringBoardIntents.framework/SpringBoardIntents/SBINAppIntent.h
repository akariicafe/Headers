@class NSString, SBINAppIntentSystemContext;

@interface SBINAppIntent : NSObject <BSDescriptionStreamable>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) SBINAppIntentSystemContext *systemContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 systemContext:(id)a1;

@end
