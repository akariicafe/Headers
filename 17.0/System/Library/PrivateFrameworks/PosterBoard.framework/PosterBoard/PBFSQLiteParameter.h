@class NSString;

@interface PBFSQLiteParameter : NSObject <PBFSQLiteQueryValue>

@property (readonly, copy, nonatomic) NSString *parameterName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unnamedParameter;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithParameterName:(id)a0;
- (id)pbf_valueForSQLiteQuery;

@end
