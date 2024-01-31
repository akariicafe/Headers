@class NSString;

@interface PHAPhotoLibraryReference : NSObject

@property (readonly, copy) NSString *path;

- (id)init;
- (BOOL)isEqualToPhotoLibraryReference:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithLibraryURL:(id)a0;

@end
