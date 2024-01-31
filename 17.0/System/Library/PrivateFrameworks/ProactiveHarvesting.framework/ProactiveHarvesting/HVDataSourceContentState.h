@class NSString, NSMutableDictionary, NSData;

@interface HVDataSourceContentState : NSObject {
    NSString *_path;
    NSData *_fileContentsHash;
}

@property (readonly, nonatomic) unsigned int dataSource;
@property (readonly, nonatomic) NSMutableDictionary *deferredContentStates;

+ (BOOL)deleteStateForDataSource:(unsigned int)a0 basePath:(id)a1 error:(id *)a2;

- (unsigned long long)hash;
- (id)initWithDataSource:(unsigned int)a0 basePath:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)saveStateWithError:(id *)a0;

@end
