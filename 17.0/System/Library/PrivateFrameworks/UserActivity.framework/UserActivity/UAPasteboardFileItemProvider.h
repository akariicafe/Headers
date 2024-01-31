@class NSUUID, NSString, NSURL, NSData;

@interface UAPasteboardFileItemProvider : NSObject <UAPasteboardFileItemProviding>

@property (retain) NSURL *fileURL;
@property (retain) NSData *sandboxExtension;
@property BOOL isDir;
@property (nonatomic) BOOL preferFileRep;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)conformsToProtocol:(id)a0;

- (void).cxx_destruct;
- (void)getDataFileWithCompletionBlock:(id /* block */)a0;
- (void)accessFileAtURLWithCompletion:(id /* block */)a0;
- (void)getDataWithCompletionBlock:(id /* block */)a0;
- (id)getFileName;
- (id)initWithURL:(id)a0 sandboxExtension:(id)a1;

@end
