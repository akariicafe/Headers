@class NSObject;

@interface CPMLEvalutionResult : NSObject {
    NSObject *object;
    unsigned long long count;
}

- (void).cxx_destruct;
- (double)getDouble;
- (id)getString;
- (id)getList;
- (int)getInt;
- (id)getListDict;
- (id)getStringList;
- (id)init:(id)a0 withConfigurationList:(id)a1;

@end
