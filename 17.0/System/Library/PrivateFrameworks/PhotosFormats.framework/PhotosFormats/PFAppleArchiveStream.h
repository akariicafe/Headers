@class NSURL, NSData, NSDictionary;

@interface PFAppleArchiveStream : NSObject {
    struct AAByteStream_impl { } *_inputStream;
    struct AAByteStream_impl { } *_outputStream;
    struct AAByteStream_impl { } *_compressionStream;
    struct AAByteStream_impl { } *_encryptionStream;
    struct AEAContext_impl { } *_encryptionContext;
}

@property (readonly) NSURL *archiveURL;
@property long long compression;
@property (retain) NSData *encryptionKey;
@property (retain) NSDictionary *encryptedArchiveMetadata;
@property BOOL appendToExistingArchive;
@property unsigned long long blockSize;

- (BOOL)close:(id *)a0;
- (id)init;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)openForWriting:(id *)a0;
- (id)initWithArchiveURL:(id)a0;
- (BOOL)openForReading:(id *)a0;
- (struct AAByteStream_impl { } *)_byteStreamToBeReadByArchiveDecodingStream;
- (struct AAByteStream_impl { } *)_byteStreamToBeTargetedByArchiveEncodingStream;
- (BOOL)_openForReadingEncryptionStreamWithError:(id *)a0;
- (BOOL)_openForWritingCompressionStreamShouldAppend:(BOOL)a0 error:(id *)a1;
- (BOOL)_openForWritingEncryptionStreamWithError:(id *)a0;
- (BOOL)_setupEncryptionContextForWritingWithError:(id *)a0;
- (unsigned int)aaCompressionAlgorithm;

@end
