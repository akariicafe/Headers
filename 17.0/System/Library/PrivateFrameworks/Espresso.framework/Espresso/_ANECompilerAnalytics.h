@class NSData, NSNumber, NSArray;

@interface _ANECompilerAnalytics : NSObject

@property (readonly, nonatomic) NSData *analyticsBuffer;
@property (readonly, nonatomic) NSNumber *bufferSizeInBytes;
@property (retain, nonatomic) NSArray *procedureAnalytics;

+ (id)new;
+ (id)objectWithBuffer:(id)a0;

- (id)init;
- (id)serialize;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBuffer:(id)a0;
- (unsigned long long)getDataValueAt:(unsigned long long)a0;
- (struct _AnalyticsData { unsigned int x0; unsigned int x1; char x2[0]; } *)dataInfoAt:(unsigned long long)a0;
- (BOOL)getBOOLDataValueAt:(unsigned long long)a0;
- (struct _AnalyticsGroupInfo { unsigned int x0; unsigned long long x1; unsigned int x2; unsigned long long x3; } *)groupInfoAt:(unsigned long long)a0;
- (struct _AnalyticsLayerInfo { char x0[64]; char x1[64]; float x2; } *)layerInfoAt:(unsigned long long)a0;
- (unsigned long long *)offsetTableAt:(unsigned long long)a0 count:(unsigned int)a1;
- (BOOL)populateAnalytics;
- (struct _AnalyticsProcedureInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned int x6; unsigned long long x7; } *)procedureInfoAt:(unsigned long long)a0;
- (id)stringForAnalyticsType:(unsigned int)a0;
- (struct _AnalyticsTaskInfo { unsigned int x0; unsigned long long x1; } *)taskInfoAt:(unsigned long long)a0;

@end
