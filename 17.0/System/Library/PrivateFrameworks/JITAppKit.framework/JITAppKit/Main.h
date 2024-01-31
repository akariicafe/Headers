@class NSString;

@interface Main : NSObject {
    NSString *_path;
    NSString *_fileName;
    void *_zip;
}

@property (readonly, nonatomic) BOOL open;
@property (readonly, nonatomic) BOOL close;

+ (BOOL)createZipFileAtPath:(id)a0 withContentsOfDirectory:(id)a1;
+ (BOOL)createZipFileAtPath:(id)a0 withContentsOfDirectory:(id)a1 keepParentDirectory:(BOOL)a2;
+ (BOOL)createZipFileAtPath:(id)a0 withFilesAtPaths:(id)a1;
+ (id)dateWithMicrosoftDOSFormat:(unsigned int)a0;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 delegate:(id)a2;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 overwrite:(BOOL)a2 password:(id)a3 error:(id *)a4;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 overwrite:(BOOL)a2 password:(id)a3 error:(id *)a4 delegate:(id)a5;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 overwrite:(BOOL)a2 password:(id)a3 error:(id *)a4 delegate:(id)a5 progressHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 overwrite:(BOOL)a2 password:(id)a3 progressHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)writeFile:(id)a0;
- (BOOL)writeData:(id)a0 fileName:(id)a1;
- (BOOL)writeFileAtPath:(id)a0 withFileName:(id)a1;
- (BOOL)writeFolderAtPath:(id)a0 withFolderName:(id)a1;
- (void)zipInformation:(struct { struct tm_zip_s { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 setDate:(id)a1;

@end
