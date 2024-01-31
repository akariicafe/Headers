@class NSString;

@interface IDSSOSMetric : NSObject <CUTSOSMetric>

@property (nonatomic) unsigned long long sosDomain;
@property (nonatomic) unsigned long long sosType;
@property (nonatomic) long long sosError;
@property (retain, nonatomic) NSString *operationID;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metricWithDomain:(unsigned long long)a0 type:(unsigned long long)a1 error:(long long)a2 bagURL:(id)a3;

- (void).cxx_destruct;
- (id)initWithDomain:(unsigned long long)a0 type:(unsigned long long)a1 error:(long long)a2 bagURL:(id)a3;

@end
