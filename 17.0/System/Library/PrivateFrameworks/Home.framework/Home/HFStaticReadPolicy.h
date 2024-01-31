@class NSString;

@interface HFStaticReadPolicy : NSObject <HFCharacteristicReadPolicy>

@property (readonly, nonatomic) unsigned long long decision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)policyWithDecision:(unsigned long long)a0;

@end
