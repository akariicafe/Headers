@protocol _DPDataRecorder, _DPDataRecorderKeyProperties;

@interface _DPNumericDataRecorder : NSObject

@property (readonly, nonatomic) id<_DPDataRecorder, _DPDataRecorderKeyProperties> recorder;

- (id)init;
- (BOOL)recordNumbersVectors:(id)a0;
- (id)description;
- (BOOL)record:(id)a0 metadata:(id)a1;
- (BOOL)recordNumbersVectors:(id)a0 metadata:(id)a1;
- (BOOL)record:(id)a0;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;
- (id)initWithKey:(id)a0 databaseDirectoryPath:(id)a1 readOnly:(BOOL)a2;

@end
