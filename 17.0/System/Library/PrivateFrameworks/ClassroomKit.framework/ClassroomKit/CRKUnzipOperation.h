@class NSURL, NSError;

@interface CRKUnzipOperation : CATOperation

@property (readonly, nonatomic) NSURL *zipFileURL;
@property (readonly, nonatomic) NSURL *destinationDirectoryURL;
@property struct _BOMCopier { } *copier;
@property (retain, nonatomic) NSError *stashedError;

+ (id)errorFromBOMCopierStatus:(int)a0 message:(id)a1;

- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (void)operationWillFinish;
- (id)initWithZipFileURL:(id)a0;
- (id)initWithZipFileURL:(id)a0 destinationDirectoryURL:(id)a1;

@end
