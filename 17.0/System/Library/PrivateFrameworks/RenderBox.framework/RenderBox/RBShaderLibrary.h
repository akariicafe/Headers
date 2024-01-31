@class NSBundle, NSString, NSData, NSURL;
@protocol MTLLibrary;

@interface RBShaderLibrary : NSObject {
    struct refcounted_ptr<RB::CustomShader::Library> { struct Library *_p; } _library;
}

@property (class, readonly, nonatomic) RBShaderLibrary *defaultLibrary;

@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) id<MTLLibrary> metalLibrary;
@property (readonly, copy, nonatomic) NSString *source;

+ (id)defaultLibraryWithBundle:(id)a0;
+ (id)libraryWithContentsOfURL:(id)a0;
+ (id)libraryWithData:(id)a0;
+ (id)libraryWithMetalLibrary:(id)a0;
+ (id)libraryWithSource:(id)a0;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)addErrorHandler:(id /* block */)a0;
- (void)removeErrorHandler:(unsigned int)a0;

@end
