@interface PLRegionsAgglomerativeClusteringDataVector : NSObject

@property (readonly) double *data;
@property (readonly) unsigned long long length;
@property (retain) id userInfo;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDataLength:(unsigned long long)a0;

@end
