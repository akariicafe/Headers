@class NSURL, NSData;

@interface _UIDocumentPickerNSURLWrapper : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *url;
@property (retain) NSURL *promiseURL;
@property (retain) NSData *scope;
@property (retain) NSData *promiseScope;

+ (id)wrapperWithURL:(id)a0 readonly:(BOOL)a1;
+ (void)assembleURL:(id)a0 sandbox:(id)a1 physicalURL:(id)a2 physicalSandbox:(id)a3;
+ (id)wrapperWithURL:(id)a0;
+ (id)wrapperForExportWithURL:(id)a0 error:(id *)a1;
+ (id)wrapperWithURL:(id)a0 createSandboxIfNoneAttached:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
