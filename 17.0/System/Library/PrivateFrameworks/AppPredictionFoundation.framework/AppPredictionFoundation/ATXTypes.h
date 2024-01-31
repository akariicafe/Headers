@interface ATXTypes : NSObject

+ (id)stringForEngagementType:(unsigned long long)a0;
+ (id)stringForConsumerType:(unsigned long long)a0;
+ (id)validConsumerTypeList;
+ (void)iterConsumerTypesWithBlock:(id /* block */)a0;
+ (id)validConsumerSubTypes;
+ (id)uiTypeForActionConsumerSubType:(unsigned char)a0;
+ (unsigned long long)consumerTypeForSubType:(unsigned char)a0;
+ (BOOL)isActionSpotlightConsumerSubType:(unsigned char)a0;
+ (void)iterConsumerSubTypesWithBlock:(id /* block */)a0;
+ (id)consumerMapping;
+ (id)inverseConsumerSubtypeMapping;
+ (id)consumerSubtypeMapping;
+ (id)safeStringForConsumerSubtype:(unsigned char)a0;
+ (id)validConsumerSubTypeList;
+ (unsigned long long)engagementTypeForString:(id)a0 found:(BOOL *)a1;
+ (unsigned long long)consumerTypeForString:(id)a0 found:(BOOL *)a1;
+ (unsigned char)consumerSubtypeForString:(id)a0 found:(BOOL *)a1;
+ (id)validConsumerTypes;
+ (id)stringForConsumerSubtype:(unsigned char)a0;

@end
