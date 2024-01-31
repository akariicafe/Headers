@class NSURL, SCNMTLLibraryManager;
@protocol MTLLibrary;

@interface SCNMTLLibrary : NSObject {
    NSURL *_libraryURL;
    SCNMTLLibraryManager *_manager;
}

@property (readonly, nonatomic) id<MTLLibrary> library;

- (void)dealloc;
- (void)_load;
- (id)initWithPath:(id)a0 manager:(id)a1;

@end
