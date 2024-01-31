@class NSString, NSURL;

@interface SKDiskImageCreateParams : NSObject

@property (nonatomic) long long format;
@property unsigned long long numBlocks;
@property (copy, nonatomic) NSString *volumeName;
@property (retain, nonatomic) NSURL *source;
@property (nonatomic) long long encryption;
@property (nonatomic) BOOL stdinPassPhrase;

- (id)redactedDescription;
- (id)description;
- (void).cxx_destruct;
- (id)diConvertParamsWithOutputURL:(id)a0 error:(id *)a1;
- (id)diCreateParamsWithURL:(id)a0 error:(id *)a1;
- (id)initWithDisk:(id)a0;
- (id)initWithDisk:(id)a0 format:(long long)a1;
- (id)initWithDiskImage:(id)a0;
- (id)initWithDiskImage:(id)a0 format:(long long)a1;
- (id)initWithFormat:(long long)a0 sourceURL:(id)a1;
- (id)initWithNumBlocks:(unsigned long long)a0 volumeName:(id)a1;
- (id)initWithNumBlocks:(unsigned long long)a0 volumeName:(id)a1 format:(long long)a2;

@end
