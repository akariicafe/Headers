@class NSMutableArray, NSFileHandle;

@interface Espresso_mxnetTools_ImageBinaryRecordReader : NSObject

@property (retain) NSFileHandle *recFileHandle;
@property struct _mxnetTools_recordHeader_t_ { unsigned int magic; unsigned int lrecord; } recordHeader;
@property struct _mxnetTools_imageHeader_t_ { unsigned int flag; float label; struct _mxnetTools_imageID_t_ { unsigned long long ID[2]; } imageID; } imageHeader;
@property unsigned long long currentOffset;
@property (retain) NSMutableArray *labelsPrivate;

- (id)imageData;
- (id)labels;
- (void).cxx_destruct;
- (struct _mxnetTools_imageID_t_ { unsigned long long x0[2]; })imageID;
- (id)initWithRecFile:(id)a0 error:(id *)a1;
- (BOOL)nextRecordAndError:(id *)a0;
- (BOOL)seekRecordWithID:(struct _mxnetTools_imageID_t_ { unsigned long long x0[2]; } *)a0 error:(id *)a1;

@end
