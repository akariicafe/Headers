@class NSString, NSURL, NSDate, SYDocumentSender;

@interface SYDocumentAttributes : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *sourceBundleIdentifier;
@property (readonly, nonatomic) NSString *indexKey;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSURL *originalFileURL;
@property (readonly, nonatomic) NSDate *receivedDate;
@property (readonly, nonatomic) SYDocumentSender *sender;

+ (id)documentAttributesForFileAtURL:(id)a0;
+ (id)documentAttributesForFileAtURL:(id)a0 error:(id *)a1;
+ (void)_documentAttributesForFileAtURL:(id)a0 completion:(id /* block */)a1;
+ (BOOL)_removeDocumentAttributesForFileAtURL:(id)a0 keepDocumentRelatedUniqueIdentifierKey:(BOOL)a1 error:(id *)a2;
+ (id)documentAttributesFromData:(id)a0;
+ (id)documentAttributesFromData:(id)a0 error:(id *)a1;
+ (BOOL)removeDocumentAttributesForFileAtURL:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)dataRepresentationWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSourceBundleIdentifier:(id)a0 indexKey:(id)a1 originalFileURL:(id)a2 receivedDate:(id)a3 sender:(id)a4;
- (BOOL)saveToFileURL:(id)a0 error:(id *)a1;
- (id)initWithSourceBundleIdentifier:(id)a0 indexKey:(id)a1 fileURL:(id)a2 receivedDate:(id)a3 sender:(id)a4;
- (BOOL)saveToFileURL:(id)a0 additionalAttributes:(id)a1 error:(id *)a2;

@end
