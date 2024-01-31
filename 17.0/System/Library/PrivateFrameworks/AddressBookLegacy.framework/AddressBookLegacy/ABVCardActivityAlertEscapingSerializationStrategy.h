@class NSString;

@interface ABVCardActivityAlertEscapingSerializationStrategy : NSObject <ABVCardActivityAlertAbstractSerializationStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)regex;
+ (id)serializeString:(id)a0;
+ (id)charactersToTriggerStrategy;
+ (BOOL)strategyWouldAlterString:(id)a0;


@end
