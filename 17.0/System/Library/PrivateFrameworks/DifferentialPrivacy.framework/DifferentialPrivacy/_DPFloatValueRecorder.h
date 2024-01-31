@protocol _DPDataRecorder, _DPDataRecorderKeyProperties;

@interface _DPFloatValueRecorder : NSObject

@property (readonly, nonatomic) id<_DPDataRecorder, _DPDataRecorderKeyProperties> recorder;

- (id)init;
- (BOOL)recordFloatVectors:(id)a0 metadata:(id)a1;
- (BOOL)recordFloatVectors:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;
- (id)initWithKey:(id)a0 databaseDirectoryPath:(id)a1 readOnly:(BOOL)a2;

@end
