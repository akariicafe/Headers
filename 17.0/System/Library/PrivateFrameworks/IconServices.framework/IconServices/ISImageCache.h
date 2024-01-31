@class NSData, NSMutableDictionary;

@interface ISImageCache : NSObject

@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain) NSMutableDictionary *imageBagsByDescriptor;
@property (readonly) NSData *latestValidationToken;

- (id)init;
- (id)allImages;
- (void)setImage:(id)a0 forDescriptor:(id)a1;
- (void).cxx_destruct;
- (id)imageForDescriptor:(id)a0;
- (id)debugDescription;

@end
