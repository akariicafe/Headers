@class NSString;

@interface WKSecureCodingArchivingDelegate : NSObject <NSKeyedArchiverDelegate, NSKeyedUnarchiverDelegate>

@property (nonatomic) BOOL rewriteMutableArray;
@property (nonatomic) BOOL rewriteMutableData;
@property (nonatomic) BOOL rewriteMutableDictionary;
@property (nonatomic) BOOL rewriteMutableString;
@property (nonatomic) BOOL transformURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)unarchiver:(id)a0 didDecodeObject:(id)a1;
- (id)archiver:(id)a0 willEncodeObject:(id)a1;

@end
