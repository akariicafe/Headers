@class NSURL, NSSet;

@interface FCPersistentDictionary : NSObject

@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSSet *allowedClasses;

- (id)init;
- (id)read;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 allowedClasses:(id)a1;
- (BOOL)writeWithAccessor:(id /* block */)a0;

@end
