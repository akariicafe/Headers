@interface FedStatsDataTypeFactory : NSObject

+ (id)stringFromDataType:(long long)a0;
+ (id)createFedStatsDataType:(id)a0 dataTypeParams:(id)a1 possibleError:(id *)a2;
+ (long long)dataTypeFromString:(id)a0;

@end
