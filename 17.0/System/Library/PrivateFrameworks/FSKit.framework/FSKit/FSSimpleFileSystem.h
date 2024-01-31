@class FSModuleExtension;

@interface FSSimpleFileSystem : NSObject

@property (retain) FSModuleExtension *extension;

- (void).cxx_destruct;
- (void)wipeResource:(id)a0 includingRanges:(id)a1 excludingRanges:(id)a2 reply:(id /* block */)a3;

@end
