@class NSURL, NSDate;

@interface _KSFileFile : _KSFileEntry <NSSecureCoding, _KSBlobSaver> {
    int _protectionClass;
    NSURL *_url;
    NSDate *_lastModified;
    unsigned long long _offset;
    unsigned long long _size;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (int)protectionFromURL:(id)a0;

- (void)consistencyCheck;
- (id)initWithURL:(id)a0;
- (id)contents;
- (id)lastModified;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)size;
- (id)URL;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)restoreToPath:(id)a0;
- (void)saveTo:(id)a0;
- (void)loadAttributesFromURL:(id)a0;
- (void)saveAttributesToURL:(id)a0;

@end
